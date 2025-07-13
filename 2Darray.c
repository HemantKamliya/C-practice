#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    printf("Enter rows and columns of matrix A: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter rows and columns of matrix B: ");
    scanf("%d%d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    int a[r1][c1], b[r2][c2], ab[r1][c2];

    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++) {
            ab[i][j] = 0;
            for (int k = 0; k < c1; k++)
                ab[i][j] += a[i][k] * b[k][j];
        }

    printf("Product of matrices:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            printf("%d ", ab[i][j]);
        printf("\n");
    }

    return 0;
}
