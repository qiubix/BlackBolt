#include "CharUtil.h"
#include <string>

namespace charutil {

char lower(char letter) {
  return std::tolower(static_cast<unsigned char>(letter));
}

char upper(char letter) {
  return std::toupper(static_cast<unsigned char>(letter));
}

bool isVowel(char letter) {
  return std::string("aeiouy").find(lower(letter)) != std::string::npos;
}

}
