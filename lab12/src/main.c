#include "lib.h"

int main() {
    int n;

    printf("Введіть кількість рядків трикутника Паскаля: ");
    scanf("%d", &n);

    pascalTriangleIterative(n);
    printf("\n");
    pascalTriangleRecursive(n);

    return 0;
}
