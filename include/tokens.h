#ifndef __NGIT_TOKENS_H__
#define __NGIT_TOKENS_H__

#include "ngit_errors.h"

#define NGIT_MAX_TOKENS 10

#define NGIT_TOKEN_USER_PARAM 0
#define NGIT_TOKEN_COMMAND 1

NGitResults ngit_tokenize(const int argc, const char **argv, int* tokenArray);

#endif