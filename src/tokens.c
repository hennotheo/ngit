#include "tokens.h"

#include "utils.h"
#include "ngit_errors.h"

int get_arg_token(const int argId, const char* arg)
{
    if(argId == 1)
        return NGIT_TOKEN_COMMAND;

    return NGIT_TOKEN_USER_PARAM;
}

NGitResults ngit_tokenize(const int argc, const char **argv, int* tokenArray)
{
    if(argc > NGIT_MAX_TOKENS)
    {
        return NGIT_FAILURE;
    }

    for (int i = 0; i < argc; i++)
    {
        tokenArray[i] = get_arg_token(i, argv[i]);
    }

    return NGIT_SUCCESS;
}