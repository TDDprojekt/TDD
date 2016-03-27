#include "Soundex.h"


std::string Soundex::encode(std::string word){
        zeroPad(word);
        return word;

}

void Soundex::zeroPad(std::string &word){
        word+="000";
}
