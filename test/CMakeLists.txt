cmake_minimum_required(VERSION 2.8)

include_directories(${inheritance_SOURCE_DIR}/inc)

add_executable(basic basic.cpp)
target_link_libraries(basic
    inheritance
    libgtest
    libgmock
)

add_executable(intermediate intermediate.cpp)
target_link_libraries(intermediate
    inheritance
    libgtest
    libgmock
)

add_executable(advanced advanced.cpp)
target_link_libraries(advanced
    inheritance
    libgtest
    libgmock
)

add_executable(expert expert.cpp)
target_link_libraries(expert
    inheritance
    libgtest
    libgmock
)

install(TARGETS basic DESTINATION bin)
install(TARGETS intermediate DESTINATION bin)
install(TARGETS advanced DESTINATION bin)
install(TARGETS expert DESTINATION bin)
