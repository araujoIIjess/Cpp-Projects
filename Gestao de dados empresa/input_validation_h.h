#ifndef INPUT_VALIDATION_H
#define INPUT_VALIDATION_H

#include "validation_headers.h"
bool checkId_length(std::string_view id);
bool checkSeqNumbers(std::string_view id);
std::string toUpper(std::string id);
bool checkSeqLetters(std::string_view id);

#endif