cmake_minimum_required(VERSION 3.10)
project(OffChain)

set(CMAKE_CXX_STANDARD 17)

add_executable(OffChain Project/main.cpp Project/sha256.h Project/sha256.cpp Project/block.h
        Project/Blockchain.h Project/Block.cpp Project/Blockchain.cpp Project/atomic_swap.h)