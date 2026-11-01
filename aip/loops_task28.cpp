#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int x, k, i, sum;
    k = 0;
    sum = 0;
    float A;
    printf("Введите 20 целых чисел: ");
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            k = k + 1;
            sum = sum + x;
        }
    }
    if (k == 0)
    {
        printf("Нет четных чисел\n");
    }
    else

    {
        A = (float)sum / k;
        printf("Среднее арифметическое четных чисел %f, количество четных чисел %d\n", A, k);
    }
    return 0;
}
