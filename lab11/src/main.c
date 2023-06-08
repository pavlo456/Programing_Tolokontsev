
#include "lib.h"

int main() {
    int N, i, j;

    printf("Введіть розмір матриці: ");
    scanf("%d", &N);

    // Виділення пам'яті для матриці
    int** matrix = (int**)malloc(N * sizeof(int*));
    for (i = 0; i < N; i++) {
        matrix[i] = (int*)malloc(N * sizeof(int));
    }

    printf("Введіть елементи матриці:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Виділення пам'яті для результату
    int* result = (int*)malloc(N * sizeof(int));

    // Виклик функції flatten_and_sort
    flatten_and_sort(matrix, N, result);

    printf("Результат:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    // Звільнення пам'яті
    for (i = 0; i < N; i++) {
        free(matrix[i]);
    }
    free(matrix);
    free(result);

    return 0;
}
