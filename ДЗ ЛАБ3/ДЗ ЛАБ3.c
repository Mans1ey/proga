#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    float A, B, S, P;
    printf("������� ����� ������� A: ");
    scanf("%f", &A);
    printf("������� ����� ������� B: ");
    scanf("%f", &B);
    S = A * B;
    P = 2 * (A + B);
    printf("������� ��������������: %.2f\n", S);
    printf("�������� ��������������: %.2f\n", P);
    return 0;
}