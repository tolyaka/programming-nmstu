#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{
    float R;
    float L, S, Sf, V;

	printf("R = ");
	scanf("%f", &R);

	L = 2 * M_PI * R; //длина окружности
	S = M_PI * pow(R, 2); //площадь круга
	Sf = 4 * S; //площ. п. сферы
	V = (4.0 / 3.0) * S * R; //объем

	printf("L = %f\n", L);
	printf("S = %f\n", S);
	printf("Sf = %f\n", Sf);
	printf("V = %f\n", V);
	return 0;
}
