#include "tokens.h"

#include <string.h>

#include "utils.h"
#include "ngit_errors.h"

int get_arg_token(const int argId, const char *arg)
{
    if (argId == 1)
        return NGIT_TOKEN_COMMAND;

    int length = strlen(arg);

    if (strlen >= 2 && arg[0] == '-' && arg[1] != '\0')
        return NGIT_TOKEN_OPTION;

    return NGIT_TOKEN_USER_PARAM;
}

NGitResults ngit_tokenize(const int argc, const char **argv, int *tokenArray)
{
    if (argc > NGIT_MAX_TOKENS)
    {
        return NGIT_FAILURE;
    }

    for (int i = 1; i < argc; i++)
    {
        tokenArray[i] = get_arg_token(i, argv[i]);
    }

    return NGIT_SUCCESS;
}