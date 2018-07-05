#include "atomic_swap.h"

int main(int argc, char* argv[]){
    Blockchain A = Blockchain();
    std::cout << "New block added"<<'\n';
    A.addBlock(Block(1,"ugudyfb"));
    return 0;
}