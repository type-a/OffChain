#include <cstdint>
#include "block.h"
#include <list>

using namespace std;

class Blockchain{
public:
    Blockchain();
    void addBlock(Block newBlock);
//    void atomicSwap(Blockchain to, Blockchain from, string toData, string fromData);
    void getData();
    void getHash();

private:
    uint32_t nDifficulty;
    list<Block> offChain;
    Block getLastHash() const;

};
