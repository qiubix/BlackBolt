#include <string>

class Soundex {
public:
  std::string encode(const std::string& name) const {
    return "";
  };
};

#include "gmock/gmock.h"

TEST(SoundexEncoding, RetainsSoleLetterOfOneLetterWord) {
  Soundex soundex;

  auto encoded = soundex.encode("A");
}
