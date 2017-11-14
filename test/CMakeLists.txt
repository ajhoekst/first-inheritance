cmake_minimum_required(VERSION 2.8)

include_directories(${inheritance_SOURCE_DIR}/inc)

add_custom_target(
    forceUpdate
    COMMAND ${CMAKE_SOURCE_DIR}/scripts/update.sh
)

if (${LEVEL} STREQUAL "basic")
add_executable(basic basic.cpp)
add_dependencies(basic forceUpdate)
target_link_libraries(basic
    inheritance
    libgtest
    libgmock
)
endif()

if (${LEVEL} STREQUAL "intermediate")
add_executable(intermediate intermediate.cpp)
add_dependencies(intermediate forceUpdate)
target_link_libraries(intermediate
    inheritance
    libgtest
    libgmock
)
endif()

if (${LEVEL} STREQUAL "advanced")
add_executable(advanced advanced.cpp)
add_dependencies(advanced forceUpdate)
target_link_libraries(advanced
    inheritance
    libgtest
    libgmock
)
endif()

if (${LEVEL} STREQUAL "expert")
add_executable(expert expert.cpp)
add_dependencies(expert forceUpdate)
target_link_libraries(expert
    inheritance
    libgtest
    libgmock
)
endif()
