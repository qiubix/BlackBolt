#include "StringUtil.h"
#include "CharUtil.h"

namespace stringutil {

std::string head(const std::string& word) {
  return word.substr(0, 1);
}

std::string upperFront(const std::string& front) {
  return std::string(1, charutil::upper(front.front()));
}

std::string tail(const std::string& word) {
  if (word.length() == 0) return "";
  return word.substr(1);
}

std::string zeroPad(const std::string& word, unsigned int toLength) {
  auto zerosNeeded = toLength - word.length();
  return word + std::string(zerosNeeded, '0');
}

}
