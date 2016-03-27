#include "Soundex.h"


std::string Soundex::encode(std::string word){
        word=head(word)+encodeDigits(word);
        return zeroPad(word);
}

std::string Soundex::zeroPad(std::string &word){
        auto zerosNeeded = 4-word.length();
        return word+ std::string(zerosNeeded,'0');
}

std::string Soundex::head(std::string &word){
    return word.substr(0,1);
}
std::string Soundex::encodeDigits(std::string &word){
    if(word.length()>1)
        return "1";
    return "";
}
