#include <string>
#include "Soundex.h"

#include "gmock/gmock.h"    //<label id="code.include"/>

using ::testing::Eq;
using ::testing::Test;
class SoundexEncoding:public Test{
public:
    Soundex soundex;

};

TEST_F(SoundexEncoding, RetainsSoleLetterOfOneLetterWord) {

   ASSERT_THAT(soundex.encode("A"), Eq("A000"));
}
TEST_F(SoundexEncoding,PadsWithThreeZerosForDigits){

    ASSERT_THAT(soundex.encode("Ib"),Eq("I100"));
}



