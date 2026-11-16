#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
const int N = 20;
int main()
{
    setlocale(LC_ALL, "Rus");
    int C[N][N], n, m, i, j, k, tmp;
    printf("Введите количество строк и столбцов (не больше 20): ");
    scanf("%d %d", &n, &m);
    printf("Введите элементы матрицы:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &C[i][j]);
    printf("Исходная матрица:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    for (i = 0; i < n; i++)
        for (k = 0; k < m - 1; k++)
            for (j = 0; j < m - 1; j++)
                if (C[i][j] > C[i][j + 1])
                {
                    tmp = C[i][j];
                    C[i][j] = C[i][j + 1];
                    C[i][j + 1] = tmp;
                }
    printf("Матрица после сортировки строк:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}
