include_directories(${PROJECT_SOURCE_DIR}/include)

#FILE(GLOB HEADER_FILES ${PROJECT_SOURCE_DIR}/include *.h)
#source_group(Include FILES ${HEADER_FILES})

add_definitions(-std=c++11)
file(GLOB_RECURSE SRC_FILES *.cpp)
add_executable(euler_opt ${SRC_FILES})
target_link_libraries(euler_opt boost_system GL GLU glut)