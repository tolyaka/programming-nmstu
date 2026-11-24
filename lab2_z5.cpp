#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Russian");

    int h, m;
    printf("Введите количество часов: ");
    scanf("%d", &h);
    printf("Введите количество минут: ");
    scanf("%d", &m);

	// с пом. тернарного оператора
	float ugol = fabs(((h % 12) * 30 + m * 0.5) - (m * 6));
	float a = (ugol > 180) ? (360 - ugol) : ugol; // тернарный оператор для нахождения меньшего угла
    printf("Меньший угол между часовой и минутной стрелкой равен: %.2f", a);
}
