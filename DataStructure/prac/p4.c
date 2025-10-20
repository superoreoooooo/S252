#include <stdio.h>

int facto(int s) {
    return s > 1 ? s * facto(s - 1) : 1;
}

void hanoi(int n, char from, char by, char to) {
    if (n == 1) {
        printf("%c -(%d)-> %c\n", from, n, to);
    } else {
        hanoi(n - 1, from, to, by);
        printf("%c -(%d)-> %c\n", from, n, to);
        hanoi(n - 1, by, from, to);
    }
}

int main(int argc, char const *argv[])
{
    printf("%d\n", facto(5));
    hanoi(3, 'A', 'B', 'C');
    return 0;
}
