#ifndef CHAR_UTIL_H
#define CHAR_UTIL_H

char lower(char letter) {
  return std::tolower(static_cast<unsigned char>(letter));
}

bool isVowel(char letter) {
  return std::string("aeiouy").find(lower(letter)) != std::string::npos;
}

#endif //CHAR_UTIL_H
