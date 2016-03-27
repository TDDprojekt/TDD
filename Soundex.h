#ifndef SOUNDEX_H
#define SOUNDEX_H
#include <string>

class Soundex{
public:
    static const size_t MaxCodeLength{4};
    std::string encode(std::string word);

private:
    std::string zeroPad(std::string &word);
    std::string head(std::string &word);
    std::string encodeDigits(std::string &word);
};

#endif
