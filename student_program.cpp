#include <stdio.h>
#include <stdlib.h>

void GetMatrix(int **value, int *row, int *col) {
    scanf("%d %d", row, col);
    *value = (int *)malloc((*row) * (*col) * sizeof(int));
    
    for (int i = 0; i < (*row); i++) {
        for (int j = 0; j < (*col); j++) {
            scanf("%d", (*value) + (i * (*col) + j));
        }
    }
}

void PrintMatrix(int *value, int row, int col) {
    printf("Matrix (%dx%d):\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", *(value + (i * col) + j));
        }
        printf("\n");
    }
}

int main() {
    int *data, m, n;
    GetMatrix(&data, &m, &n);
    PrintMatrix(data, m, n);
    free(data);
    return 0;
}
