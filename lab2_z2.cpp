#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int K, ch, m, s;

	printf("K = ");
	scanf("%d", &K);

	ch = K / 3600;
	m = (K % 3600) / 60;
	s = K % 60;

	printf("chasov %d\n", ch);
	printf("minut %d\n", m);
	printf("sec %d\n", s);
	return 0;
}
