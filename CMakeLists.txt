cmake_minimum_required(VERSION 3.16...3.28)

# Define a macro that helps defining an option
macro(ctgui_set_option var default type docstring)
    if(NOT DEFINED ${var})
        set(${var} ${default})
    endif()
    set(${var} ${${var}} CACHE ${type} ${docstring} FORCE)
endmacro()

# Set a default build type if none was provided
ctgui_set_option(CMAKE_BUILD_TYPE Release STRING "Choose the type of build (Debug or Release)")

project(CTGUI VERSION 1.1.0 LANGUAGES C CXX)

include(${CMAKE_CURRENT_SOURCE_DIR}/cmake/Config.cmake)

# Add an option for choosing the build type (shared or static)
ctgui_set_option(BUILD_SHARED_LIBS TRUE BOOL "TRUE to build CTGUI as a shared library, FALSE to build it as a static library")

# Define an option for choosing between static and dynamic C runtime
if(TGUI_OS_WINDOWS)
    ctgui_set_option(TGUI_USE_STATIC_STD_LIBS FALSE BOOL "TRUE to statically link to the standard libraries, FALSE to use them as DLLs")

    if(BUILD_SHARED_LIBS AND TGUI_USE_STATIC_STD_LIBS)
        message(FATAL_ERROR "BUILD_SHARED_LIBS and TGUI_USE_STATIC_STD_LIBS cannot be used together")
    endif()
endif()

find_package(TGUI ${CTGUI_VERSION_MAJOR} REQUIRED)

add_subdirectory(src/CTGUI)

# Install the header files
install(DIRECTORY include
        DESTINATION .
        COMPONENT devel)
