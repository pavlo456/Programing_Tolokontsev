#include "lib.h"

// Функція для обчислення елементів трикутника Паскаля ітеративним методом
void pascalTriangleIterative(int n) {
    int triangle[n][n];

    // Заповнення початкових значень
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangle[i][j] = 1;
            } else {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
    }

    // Виведення трикутника Паскаля
    printf("Трикутник Паскаля (ітеративний метод):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }
}

// Функція для обчислення елементів трикутника Паскаля рекурсивним методом
int pascalTriangleRecursiveHelper(int row, int col) {
    if (col == 0 || col == row) {
        return 1;
    } else {
        return pascalTriangleRecursiveHelper(row - 1, col - 1) + pascalTriangleRecursiveHelper(row - 1, col);
    }
}

void pascalTriangleRecursive(int n) {
    // Виведення трикутника Паскаля
    printf("Трикутник Паскаля (рекурсивний метод):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", pascalTriangleRecursiveHelper(i, j));
        }
        printf("\n");
    }
}

