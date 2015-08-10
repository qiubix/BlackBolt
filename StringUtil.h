#ifndef STRING_UTIL_H
#define STRING_UTIL_H

std::string head(const std::string& word) {
  return word.substr(0, 1);
}

std::string upperFront(const std::string& front) {
  return std::string(1, std::toupper(static_cast<unsigned char>(front.front())));
}

std::string tail(const std::string& word) {
  return word.substr(1);
}


#endif //STRING_UTIL_H
