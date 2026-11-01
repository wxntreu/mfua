#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int M, i;
    long long b;
    printf("Введите количество минут ");
    scanf("%d", &M);
    b = 1;
    for (i = 0; i < M; i++)
    {
        b = b * 2;
    }
    printf("Через %d минут бактерий: %lld\n", M, b);
    return 0;
}
