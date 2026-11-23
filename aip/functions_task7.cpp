#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
void create_massiv(int*& X, int& n)
{
    int i;
    printf("Кол-во элементов? ");
    scanf("%d", &n);
    X = new int[n];
    printf("Первый элемент? ");
    scanf("%d", &X[0]);
    int q = rand() % 101 - 50;
    for (i = 1; i < n; i++)
    {
        X[i] = X[i - 1] * q;
    }
}
void print_massiv(int* X, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", X[i]);
    printf("\n");
}
int max1(int* X, int n)
{
    int m, i;
    m = X[0];
    for (i = 0; i < n; i++)
        if (X[i] > m)
            m = X[i];
    return m;
}
int min1(int* X, int n)
{
    int m, i;
    m = X[0];
    for (i = 0; i < n; i++)
        if (X[i] < m)
            m = X[i];
    return m;
}
int main()
{
    setlocale(LC_ALL, "Rus");
    int* A = NULL;
    int nA = 0;
    srand(time(NULL));
    create_massiv(A, nA);
    printf("Массив A\n");
    print_massiv(A, nA);
    printf("Max: %d\n", max1(A, nA));
    printf("Min: %d\n", min1(A, nA));
    delete[] A;
    int* B = NULL;
    int nB = 0;
    create_massiv(B, nB);
    printf("Массив B\n");
    print_massiv(B, nB);
    printf("Макс Б: %d\n", max1(B, nB));
    printf("Мин Б: %d\n", min1(B, nB));
    delete[] B;
    return 0;
}