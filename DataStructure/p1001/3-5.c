#include <stdio.h>

typedef struct
{
    int row;
    int col;
    int value;
} term;

void smTranspose(term a[], term b[])
{
    int m, n, v, i, j, p;
    m = a[0].row;
    n = a[0].col;
    v = a[0].value;
    b[0].row = n;
    b[0].col = m;
    b[0].value = v;

    if (v > 0)
    {
        p = 1;
        for (i = 0; i < n; i++)
        {
            for (j = 1; j <= v; j++)
            {
                if (a[j].col == i)
                {
                    b[p].row = a[j].col;
                    b[p].col = a[j].row;
                    b[p].value = a[j].value;
                    p++;
                }
            }
        }
    }
}

int main()
{
    term a[] = { {8,7,10}, {0,2,2}, {0,6,12}, {1,4,7}, {2,0,23}, {3,3,31}, {4,1,14}, {4,5,25}, {5,6,6}, {6,0,52}, {7,4,11} };
    term b[sizeof(a) / sizeof(a[0])];
    int i;

    printf("<<희소행렬 a>>");
    for (i = 0; i <= a[0].value; i++)
        printf("\n[%3d, %3d, %3d]", a[i].row, a[i].col, a[i].value);

    smTranspose(a, b);

    printf("\n\n<<희소행렬 b>>");
    for (i = 0; i <= b[0].value; i++)
        printf("\n[%3d, %3d, %3d]", b[i].row, b[i].col, b[i].value);

    getchar();
    return 0;
}