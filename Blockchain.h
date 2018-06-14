#include <cstdint>
#include "block.h"
#include <list>

using namespace std;

class Blockchain{
public:
    Blockchain();
    void addBlock(Block newBlock);

private:
    uint32_t nDifficulty;
    list<Block> offChain;
    Block getLastHash() const;

};
