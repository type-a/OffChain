#include "atomic_swap.h"

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