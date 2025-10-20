#include <stdio.h>
#include <stdlib.h>

int** convert(int arr[][7], int x, int y) {
    int cnt = 0;
    
    for (int dy = 0; dy < y; dy++) {
        for (int dx = 0; dx < x; dx++) {
            if (arr[dy][dx] != 0) {
                cnt++;
            }
        }
    }

    int** converted = (int**)malloc((cnt + 1) * sizeof(int*));
    if (converted == NULL) return NULL;
    for (int i = 0; i < cnt + 1; i++) {
        converted[i] = (int*)malloc(3 * sizeof(int));
    }

    converted[0][0] = y;
    converted[0][1] = x;
    converted[0][2] = cnt;

    int c = 1;

    for (int dy = 0; dy < y; dy++) {
        for (int dx = 0; dx < x; dx++) {
            if (arr[dy][dx] != 0) {
                converted[c][0] = dy;
                converted[c][1] = dx;
                converted[c][2] = arr[dy][dx];
                c++;
            }
        }
    }

    return converted;
}

int main(int argc, char const *argv[])
{
    int mat[8][7] = {
        0, 0, 2, 0, 0, 0, 12, 
        0, 0, 0, 0, 7, 0, 0, 
        23, 0, 0, 0, 0, 0, 0, 
        0, 0, 0, 31, 0, 0, 0, 
        0, 14, 0, 0, 0, 25, 0, 
        0, 0, 0, 0, 0, 0, 6, 
        52, 0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 11, 0, 0
    };

    int** result = convert(mat, 7, 8);

    if (result != NULL) {
        int num_terms = result[0][2];
        for (int i = 0; i < num_terms + 1; i++) {
            printf("[%3d, %3d, %3d]\n", result[i][0], result[i][1], result[i][2]);
        }

        for (int i = 0; i < num_terms + 1; i++) {
            free(result[i]);
        }
        free(result);
    }

    return 0;
}
