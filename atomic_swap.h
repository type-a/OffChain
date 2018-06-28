
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