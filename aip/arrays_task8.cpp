#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
const int N = 7;
int main()
{
    setlocale(LC_ALL, "Rus");
    int K[N], i, s;
    for (i = 0; i < N; i++)
    {
        printf("Введите K[%d] ", i);
        scanf("%d", &K[i]);
    }
    s = 0;
    for (i = 0; i < N; i++)
    {
        if (K[i] < 0)
        {
            s = s + K[i];
        }
    }
    printf("Сумма отрицательных элементов s=%d\n", s);
    return 0;
}
