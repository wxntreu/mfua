#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
const int N = 8;
int main()
{
    setlocale(LC_ALL, "Rus");
    int A[N], i, imin, imax, t;
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
    imin = 0;
    imax = 0;
    for (i = 1; i < N; i++)
    {
        if (A[i] < A[imin])

        {
            imin = i;
        }
        if (A[i] > A[imax])
        {
            imax = i;
        }

    }
    t = A[imin];
    A[imin] = A[imax];
    A[imax] = t;
    printf("Новый массив: ");
    for (i = 0; i < N; i++)
    {
        if (i == imax || i == imin)
        {
            printf("!%d! ", A[i]);
        }
        else
        {
            printf("%d ", A[i]);
        }
    }
    printf("\n");
    return 0;
}