#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
const int N = 8;
int main()
{
    setlocale(LC_ALL, "Rus");
    int A[N], i;
    for (i = 0; i < N; i++)
    {
        printf("Введите A[%d] ", i);
        scanf("%d", &A[i]);
    }
    printf("Исходный массив: ");
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
