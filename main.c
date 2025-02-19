#include <stdio.h>

#include "ngit_errors.h"
#include "tokens.h"

// ngit [cmd] [arg_type] [arg]
#define NGIT_COMMAND_TYPE_FEATURE "feature"
#define NGIT_COMMAND_TYPE_FIX "fix"

int main(const int argc, const char **argv)
{
    int tokenArray[NGIT_MAX_TOKENS] = {-1};
    if (ngit_tokenize(argc, argv, tokenArray) == NGIT_FAILURE)
    {
        printf("Error: Too many tokens\n");
        return 1;
    }

    for (int i = 0; i < argc; i++)
    {
        printf("Token %d: %d\n", i, tokenArray[i]);
    }

    return 0;
}