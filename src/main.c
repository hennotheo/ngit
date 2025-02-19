#include <stdio.h>

int main(const int argc, const char **argv)
{
    printf("Number of arguments: %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    system("pause");
    return 0;
}