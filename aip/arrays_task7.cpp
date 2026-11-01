#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
const int N = 10;
int main()
{
    setlocale(LC_ALL, "Rus");
    int P[N], i, k;
    for (i = 0; i < N; i++)
    {
        printf("Введите P[%d] ", i);
        scanf("%d", &P[i]);
    }
    k = 0;
    for (i = 0; i < N; i++)
    {
        if (P[i] < 0)
        {
            k = k + 1;
        }
    }
    printf("Количество отрицательных элементов k=%d\n", k);
    return 0;
}
