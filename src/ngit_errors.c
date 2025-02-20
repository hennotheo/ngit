#include "ngit_errors.h"

int ngit_error(const NGitResults result)
{
    if (result == NGIT_SUCCESS)
        return result;

    printf("Error: NGit failed.\n");

    return result;
}