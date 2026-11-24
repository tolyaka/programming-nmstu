#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    int P, Q;
    int best_P = 1, best_Q = 1;
    int diff, best_diff;

    do {
        printf("Введите число от 1 до 1 000 000: ");
    } while (scanf("%d", &N) != 1 || N < 1 || N > 1000000);

    best_diff = N;
    int max_Q = sqrt(N) + 1;

    for (Q = 1; Q <= max_Q; Q++) {
        for (P = 1; P <= Q; P++) {
            diff = abs(N - P * P - Q * Q);
            if (diff < best_diff) {
                best_diff = diff;
                best_P = P;
                best_Q = Q;
            }
        }
    }

    printf("P = %d, Q = %d\n", best_P, best_Q);
    return 0;
}
