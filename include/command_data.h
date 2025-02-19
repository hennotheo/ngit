#ifndef __NGIT_COMMAND_DATA_H__
#define __NGIT_COMMAND_DATA_H__

#include <stdbool.h>

struct ngit_cmd_data
{
    bool is_valid;

    char* command;
    int token_count;
    char **tokens;


    int error_code;
};

struct ngit_cmd_data ngit_data_cmd_invalid(int error_code);
struct ngit_cmd_data ngit_info_cmd_create(const int argc, const char **argv);

#endif