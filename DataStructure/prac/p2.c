#include <stdio.h>

int main(int argc, char const *argv[])
{
    char *pt = "Korea";

    char **ptr = &pt;

    for (int i = 0; i < 5; i++) {
        printf("%c\n", *(*ptr + i));
    }

    printf("%s\n", *ptr);

    return 0;
}