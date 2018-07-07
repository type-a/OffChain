#include "atomic_swap.h"

int main(int argc, char* argv[]){
    string s = argv[0];
    Blockchain A = Blockchain();
    std::cout << "New block added"<<'\n';
    A.addBlock(Block(1,s));
    return 0;
}