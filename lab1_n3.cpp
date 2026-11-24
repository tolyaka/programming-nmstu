#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");

	double vsego, years;

	vsego = ~0ULL;
	//vsego = pow(2, 64) - 1; //всего зерен
	years = vsego/7e14;

	printf("Всего зерен: %.0f\n", vsego);
	printf("Лет потребуется: %.0f", years);
	return 0;
}