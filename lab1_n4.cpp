#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
   // setlocale(LC_ALL, "Russian");

    double a, b, y;
    printf("Введите значение a: ");
    scanf("%lf", &a);
    printf("Введите значение b: ");
    scanf("%lf", &b);

    y = sqrt(fabs((pow(a, pow(sin(b), 2) + cos(pow(b, 3))) + cbrt(pow(b, 2))) / pow(fabs((a * tan(b)) / (1 - exp(sqrt(a)))), 0.25)));

	printf("Результат вычисления: %.3lf\n", y);
    return 0;
}
