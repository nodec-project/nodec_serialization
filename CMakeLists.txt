cmake_minimum_required(VERSION 3.15)

project(nodec_serialization LANGUAGES CXX)

add_library(${PROJECT_NAME} INTERFACE)

target_include_directories(${PROJECT_NAME}
    INTERFACE
    include
    cereal/include
)

target_link_libraries(${PROJECT_NAME}
    INTERFACE nodec
)
