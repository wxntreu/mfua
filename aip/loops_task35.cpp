#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int x, a, b, c;
    for (x = 100; x <= 999; x++)
    {
        a = x / 100;
        b = x / 10 % 10;
        c = x % 10;
        if (a * a * a + b * b * b + c * c * c == 730)
        {
            printf("Наименьшее число: %d\n", x);
            break;
        }
    }

    
        return (0);
}