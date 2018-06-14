cmake_minimum_required(VERSION 3.10)
project(OffChain)

set(CMAKE_CXX_STANDARD 14)

add_executable(OffChain main.cpp sha256.h sha256.cpp block.h Blockchain.h Block.cpp Blockchain.cpp)