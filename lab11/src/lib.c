#include "lib.h"

void flatten_and_sort(int** matrix, int N, int* result) {
    int i, j, k = 0;
    int* temp = (int*)malloc(N * sizeof(int));

    // Отримання елементів головної діагоналі
    for (i = 0; i < N; i++) {
        temp[i] = matrix[i][i];
    }

    // Сортування елементів головної діагоналі за зростанням
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - i - 1; j++) {
            if (temp[j] > temp[j + 1]) {
                int swap = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = swap;
            }
        }
    }

    // Копіювання відсортованих елементів в результат
    for (i = 0; i < N; i++) {
        result[i] = temp[i];
    }

    free(temp);
}

