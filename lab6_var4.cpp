#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int sum(int a[]) {

	int s = 0;
	for (int i = 0; i < 4; i++)
		s = s + a[i];
	return s;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int marks[25][4];
	int n;
	float average;

	do {
		printf("Введите количество студентов (от 1 до 25): ");
		scanf("%d", &n);
		if (n < 1 || n > 25) {
			printf("Ошибка. ");
		}
	} while (n < 1 || n > 25);
   
	for (int i = 0; i < n; i++) {
		printf("Ученик %d:\n", i + 1);
        printf("Введите оценки по математике, физике, химии и информатике (от 1 до 5): ");
		
		for (int j = 0; j < 4; j++) {
			scanf("%d", &marks[i][j]);
			
			while (marks[i][j] < 1 || marks[i][j] > 5) {
				printf("Ошибка. Введите оценку от 1 до 5: ");
				scanf("%d", &marks[i][j]);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		average = sum(marks[i]) / 4.0;
		printf("Средняя оценка ученика %d: %.2f\n", i + 1, average);
	}

    return 0;
}