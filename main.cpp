#include <iostream>
#include <ctime>

#include "Blockchain.h"

void atomic_swap(Blockchain &To, Blockchain &From){
    string swap_data_to = To.getData();
    string swap_data_from = From.getData();
    To.addBlock(Block(1,swap_data_from));
    From.addBlock(Block(1,swap_data_to));
    if(From.getData() != swap_data_to){
        To.removeBlock();
    }
}


int main(){
    Blockchain A = Blockchain();
    Blockchain B = Blockchain();
    std::cout << "New block added #1"<<'\n';
    A.addBlock(Block(1,"new block A2 added"));
    std::cout << "New block added #2"<<'\n';
    B.addBlock(Block(2,"new bLock B added"));
    std::cout << "New block added #3"<<'\n';
    A.addBlock(Block(3,"new block A1 added"));
    return 0;
}