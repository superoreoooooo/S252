#include <stdio.h>

struct t {
    int a;
    int b;
};


int main(int argc, char const *argv[])
{
    struct t tt;
    tt.a = 10;
    tt.b = 20;

    struct t *tpt = &tt;

    printf("%d, %d\n", tt.a, tt.b);

    printf("%d\n", tpt->a);
    printf("%d\n", (*tpt).a);

    printf("%p\n", &tt);

    return 0;
}