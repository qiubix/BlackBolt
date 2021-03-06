#ifndef STRING_UTIL_H
#define STRING_UTIL_H

#include <string>

namespace stringutil {

std::string head(const std::string& word);
std::string upperFront(const std::string& front);
std::string tail(const std::string& word);
std::string zeroPad(const std::string& word, unsigned int toLength);

}

#endif //STRING_UTIL_H
