#include "block.h"
#include "sha256.h"
#include <sstream>

Block ::Block(uint32_t nIndex, const string &data) : nIndex(nIndex), data(data) {
    nNonce = -1;
    recordTime = time(nullptr);

}

string Block ::calculateHash() const {
    stringstream ss;
    ss << nIndex << recordTime << data << nNonce << previousHash;
    return sha256(ss.str());
}

string Block ::getHash() {
    return previousHash;
}

void Block::minBlock(uint32_t nDifficulty) { // taken from the original mining concept ...
    time_t timer;
    char cstr[nDifficulty + 1];
    for (uint32_t i = 0; i < nDifficulty; ++i) {
        cstr[i] = '0';
    }
    cstr[nDifficulty] = '\0';

    string str(cstr);

    do {
        nNonce++;
        newHash = calculateHash();
    } while (newHash.substr(0, nDifficulty) != str);

    cout << "Block mined: " << newHash << endl;
}

string Block::returnNewHash() {
    return newHash;
}

string Block::returnData() {
    return data;
}