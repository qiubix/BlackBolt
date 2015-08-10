#include "gmock/gmock.h"

#include "StringUtil.h"

using namespace std;
using namespace testing;
using namespace stringutil;

TEST(AString, AnswersHeadAsItsFirstLetter) {
   ASSERT_THAT(head("xyz"), Eq("x"));
}
