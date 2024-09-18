#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    float A, B, S, P;
    printf("Введите длину стороны A: ");
    scanf("%f", &A);
    printf("Введите длину стороны B: ");
    scanf("%f", &B);
    S = A * B;
    P = 2 * (A + B);
    printf("Площадь прямоугольника: %.2f\n", S);
    printf("Периметр прямоугольника: %.2f\n", P);
    return 0;
}