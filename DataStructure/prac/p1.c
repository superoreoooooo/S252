#include <stdio.h>

int main() {
    int i, j;
    int *pi = &i;

    *pi = 10;

    j = *pi;

    printf("%d, %d, %p\n", i, j, pi);

    char *pt = "Korea";

    printf("%s\n", pt);


    char a[100];
    char *pa = a;

    char *paa = &a[0];

    printf("%p, %p\n", pa, paa);


    char str[20] = "Dreams come true!", *ptr1, *ptr2;

    ptr1 = str;

    for (int i = 20; i >= 0; i--) {
        putchar(*(ptr1 + i));
    }

    printf("\n%s\n", ptr1);


    char *strs[4] = { "Korea", "Seoul", "Mapo", "152번지 2 / 3" };

    for (int i = 0; i < 4; i++) {
        printf("%s\n", strs[i]);
    }

    strs[2] = "Jongno";

    for (int i = 0; i < 4; i++) {
        printf("%s\n", strs[i]);
    }

    return 0;
}