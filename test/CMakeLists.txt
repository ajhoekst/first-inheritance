cmake_minimum_required(VERSION 2.8)

include_directories(${inheritance_SOURCE_DIR}/inc)

message(STATUS "${LEVEL}")

if (${LEVEL} STREQUAL "basic")
add_executable(basic basic.cpp)
target_link_libraries(basic
    inheritance
    libgtest
    libgmock
)
endif()

if (${LEVEL} STREQUAL "intermediate")
add_executable(intermediate intermediate.cpp)
target_link_libraries(intermediate
    inheritance
    libgtest
    libgmock
)
endif()

if (${LEVEL} STREQUAL "advanced")
add_executable(advanced advanced.cpp)
target_link_libraries(advanced
    inheritance
    libgtest
    libgmock
)
endif()

if (${LEVEL} STREQUAL "expert")
add_executable(expert expert.cpp)
target_link_libraries(expert
    inheritance
    libgtest
    libgmock
)
endif()
