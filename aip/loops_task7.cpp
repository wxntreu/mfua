#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int N, x, i, kp, ks, s;
    long long p;
    kp = 0;
    ks = 0;
    s = 0;
    p = 1;
    printf("Введите количество чисел N: ");
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &x);
        if (x < 0)
        {
            p = p * x;
            kp = kp + 1;
        }
        if (x > 5)
        {
            s = s + x;
            ks = ks + 1;
        }
    }
    if (kp == 0)
    {
        printf("Нет отрицательных чисел\n");
    }
    else

    {
        printf("Произведение отрицательных: %lld\n", p);
    }
    if (ks == 0)
    {
        printf("Нет чисел больше 5\n");
    }
    else
    {
        printf("Сумма чисел больше 5: %d\n", s);
    }
    return 0;
}
