#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    srand((unsigned)time(NULL));

    const int size = 100;
    int a[size][size];
    int n, m;
    long long p;
    long long max = 0;
    int max_index = 0;

    printf("Введите количество строк N (от 1 до %d): ", size);
    scanf("%d", &n);
    while (n < 1 || n > size) {
        printf("Ошибка. Введите N от 1 до %d: ", size);
        scanf("%d", &n);
    }

    printf("Введите количество столбцов M (от 1 до %d): ", size);
    scanf("%d", &m);
    while (m < 1 || m > size) {
        printf("Ошибка. Введите M от 1 до %d: ", size);
        scanf("%d", &m);
    }

    printf("\nМассив:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = rand() % 19 - 9;
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        p = 1;
        for (int j = 0; j < m; j++)
            p = p * a[i][j];

        printf("Произведение строки %d = %lld\n", i + 1, p);

        if (i == 0 || p > max) {
            max = p;
            max_index = i;
        }
    }

    printf("Максимальное произведение = %lld в строке %d\n", max, max_index + 1);

    return 0;
}
