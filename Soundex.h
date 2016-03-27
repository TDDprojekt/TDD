#ifndef SOUNDEX_H
#define SOUNDEX_H
#include <string>

class Soundex{
public:
    std::string encode(std::string word);
private:
    void zeroPad(std::string &word);
};

#endif
