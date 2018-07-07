#include <iostream>
#include <ctime>

using namespace std;

class Block{
public:
    string previousHash;
    Block(uint32_t nIndex, const string &data);
    string getHash();
    void minBlock(uint32_t nDifficulty);
    string returnNewHash();
    string returnData();

private:
    uint32_t nIndex;
    uint32_t nNonce;
    time_t recordTime;
    string data;
    string newHash;
    string calculateHash() const;

};


