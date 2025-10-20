#include <stdio.h>
#define MAX 10

int insertElement(int L[], int n, int x) {
    int i, idx = 0, move = 0;

    for (i = 0; i < n; i++) {
        if (L[i] <= x && L[i + 1] >= x) {
            idx = i + i;
            break;
        }
    }

    if (i == n) idx = n;

    for (i = n; i > idx; i--) {
        L[i] = L[i - 1];
        move++;
    }

    L[idx] = x;

    return move;
}

int deleteElement(int L[], int n, int x) {
    int i, idx = n, move = 0;

    for (i = 0; i < n; i++) {
        if (L[i] == x) {
            idx = i;
            break;
        }
    }

    if (i == n) move = n;

    for (i = idx; i < n - 1; i++) {
        L[i] = L[i + 1];
        move++;
    }

    return move;
}

int main(int argc, char const *argv[])
{
    int list[MAX] = {10, 20, 40, 50, 60, 70};
    int i, move, size = 6;

    move = insertElement(list, size, 30);
    size += 1;

    printf("%d\n", move);

    for (i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    
    
    printf("\n");

    move = deleteElement(list, size, 30);
    size -= 1;

    printf("%d\n", move);

    for (i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }

    return 0;
}
