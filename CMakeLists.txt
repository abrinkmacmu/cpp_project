cmake_minimum_required(VERSION 2.8)

project(cpp_project)

set(cpp_project_INCLUDE_DIR "${cpp_project_SOURCE_DIR}/include")
message("cpp_project_INCLUDE_DIR is ${cpp_project_INCLUDE_DIR}")

set(cpp_project_SRC_DIR "${cpp_project_SOURCE_DIR}/src")
message("cpp_project_SRC_DIR is ${cpp_project_SRC_DIR}")

set(cpp_project_BIN_DIR "${cpp_project_SOURCE_DIR}/bin")
message("cpp_project_BIN_DIR is ${cpp_project_BIN_DIR}")

set(cpp_project_BIN_DIR "${cpp_project_SOURCE_DIR}/bin")
message("cpp_project_BIN_DIR is ${cpp_project_BIN_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${cpp_project_BIN_DIR})


set(NP_INCLUDES "${cpp_project_INCLUDE_DIR}/novel_printer.h")
set(NP_SOURCES "${cpp_project_SRC_DIR}/novel_printer.cpp")

include_directories("${cpp_project_INCLUDE_DIR}")

add_executable(main_novel src/main_novel.cpp 
	${NP_INCLUDES} 
	${NP_SOURCES}
	)

target_link_libraries(main_novel ${cpp_project_LIBRARIES})