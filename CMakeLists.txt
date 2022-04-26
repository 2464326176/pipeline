cmake_minimum_required(VERSION 3.20)
project(pipeline)

set(CMAKE_CXX_STANDARD 14)

add_executable(pipeline
        mian.cpp manager/manager.h manager/manager.cpp manager/pipelineNode.cpp manager/pipelineNode.h unit/queue.cpp unit/queue.h)
