#include <stdio.h>

#include "ngit_errors.h"
#include "tokens.h"

// ngit [cmd] [arg_type] [arg]

int main(const int argc, const char **argv)
{
    int tokenArray[NGIT_MAX_TOKENS] = {-1};

    NGitResults result = ngit_tokenize(argc, argv, tokenArray);
    if (result != NGIT_SUCCESS)
        return ngit_error(result);

    
    for (int i = 0; i < argc; i++)
    {
        printf("Token %d: %d\n", i, tokenArray[i]);
    }

    return 0;
}