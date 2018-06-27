#include <iostream>
#include <ctime>

#include "Blockchain.h"


int main(){
    Blockchain newchain = Blockchain();
    std::cout << "New block added #1"<<'\n';
    newchain.addBlock(Block(1,"haha"));
    std::cout << "New block added #2"<<'\n';
    newchain.addBlock(Block(2,"new bLock 2 added"));
    std::cout << "New block added #3"<<'\n';
    newchain.addBlock(Block(3,"new block 3 added"));
    return 0;
}