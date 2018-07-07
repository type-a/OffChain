#include "Blockchain.h"

Blockchain ::Blockchain() {
    offChain.emplace_back(Block(0,"Genesis Block!"));
    nDifficulty = 4; // change this if you want to increase mining difficulty ....
}

void Blockchain::addBlock(Block newBlock) {
    newBlock.previousHash = getLastHash().getHash();
    newBlock.minBlock(nDifficulty);
    offChain.push_back(newBlock);
}

Block Blockchain::getLastHash() const {
    return offChain.back();
}


string Blockchain::getHash() {
    return offChain.back().returnNewHash();
}

string Blockchain::getData() {
    return offChain.back().returnData();
}

int Blockchain::size() {
    return offChain.size();
}

void Blockchain::removeBlock() {
    offChain.pop_back();
}