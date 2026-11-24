#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");

	int start_sum, sum, max_sum = 0, steps = 0, max_steps = 0;
	
	printf("Введите число: ");
	scanf("%d", &sum);

	start_sum = sum;
	max_sum = sum;

	if (sum >= 29)
	{
		do
		{
			steps++;
			sum -= 29;
			sum = sum % 100 * 100 + sum / 100;

			if (sum > max_sum)
			{
				max_sum = sum;
				max_steps = steps;
			}
		} while (sum >= 29 && sum != start_sum);
	}

	printf("%d %d\n", max_sum, max_steps);
	return 0;
}
