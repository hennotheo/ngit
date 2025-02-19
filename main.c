#include <stdio.h>
#include <stdbool.h>

#include "errors.h"
#include "command_data.h"

// ngit [cmd] [arg_type] [arg]
#define NGIT_COMMAND_TYPE_FEATURE "feature"
#define NGIT_COMMAND_TYPE_FIX "fix"

int main(const int argc, const char **argv)
{
    struct ngit_cmd_data command = ngit_info_cmd_create(argc, argv);

    if (!command.is_valid)
    {
        switch (command.error_code)
        {
        case NGIT_ERROR_NO_COMMAND:
            printf("Error: No command type provided\n");
            break;
        case NGIT_ERROR_NO_ARGS:
            printf("Error: No arguments provided\n");
            break;
        case NGIT_ERROR_COMMAND_NOT_FOUND:
            printf("Error: No command not found.\n");
            break;
        default:
            printf("Error: Unknown error\n");
            break;
        }
        return 1;
    }

    printf("Command work!\n");
    return 0;
}