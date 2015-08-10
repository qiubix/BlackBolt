#include "gmock/gmock.h"

#include "CharUtil.h"

using namespace std;
using namespace testing;
using namespace charutil;

TEST(AChar, IsAVowelForSixSpecificLetters) {
   ASSERT_TRUE(isVowel('A'));
   ASSERT_TRUE(isVowel('E'));
   ASSERT_TRUE(isVowel('I'));
   ASSERT_TRUE(isVowel('O'));
   ASSERT_TRUE(isVowel('U'));
   ASSERT_TRUE(isVowel('Y'));
}
