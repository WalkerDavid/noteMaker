cmake_minimum_required(VERSION 3.7.2)

# For Eclipse the project name cannot match the executable name
project (noodleyNoteMaker CXX C Fortran)

include_directories("${PROJECT_SOURCE_DIR}/noteMaker"
					"${CMAKE_BINARY_DIR}/noteMaker"
					)
					
add_subdirectory(snoteMakerma)

set(noteMaker)

link_directories(${CMAKE_BINARY_DIR}/noteMaker)

set (noodleyNoteMaker_sources main.cpp)
set (flexlab_sources)