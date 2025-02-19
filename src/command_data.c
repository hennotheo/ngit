#include "command_data.h"

#include "commands.h"
#include "errors.h"
#include "utils.h"

struct ngit_cmd_data ngit_data_cmd_invalid(int error_code, struct ngit_cmd_data data)
{
    data.is_valid = false;
    data.error_code = error_code;
    return data;
}

struct ngit_cmd_data ngit_info_cmd_create(const int argc, const char **argv)
{
    struct ngit_cmd_data data;
    if (argc == 1)
        return ngit_data_cmd_invalid(NGIT_ERROR_NO_COMMAND, data);

    data.command = argv[1];
    if (argc == 2)
        return ngit_data_cmd_invalid(NGIT_ERROR_NO_ARGS, data);

    if (STR_NOT_EQ(argv[1], NGIT_COMMAND_HELP))
        return ngit_data_cmd_invalid(NGIT_ERROR_COMMAND_NOT_FOUND, data);

    data.is_valid = true;
    data.token_count = argc - 1;
    data.tokens = argv + 1; // skip the first token (ngit)
    return data;
}