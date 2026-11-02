#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int N, i, a1, a, d, s;
    printf("Введите N, a1 и d: ");
    scanf("%d %d %d", &N, &a1, &d);
    a = a1;
    s = 0;
    for (i = 0; i < N; i++)
    {
        printf("%d ", a);
        if (a < 5)
        {
            s = s + a;
        }
        a = a + d;
    }
    printf("Сумма членов меньше 5: %d\n", s);
    return(0);
}