#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
const int N = 8;
int main()
{
    setlocale(LC_ALL, "Rus");
    int A[N][N], i, j, min, sum;
    sum = 0;
    printf("Введите 64 числа:\n");

    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d ", &A[i][j]);
    for (i = 0; i < N; i++)
{
    for (j = 0; j < N; j++)
        printf("%d ", A[i][j]);
    printf("\n");
}
    min = A[0][0];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++) 
        {
            if (i + j < 7)
                sum += A[i][j];
            if (A[i][j] < min)
                min = A[i][j];
        }
    }
    printf("Минимум: %d\n", min);
    printf("Сумма элементов выше побочной диагонали: %d\n", sum);
    return 0;
}
