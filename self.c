/*
 * Студент: Мареева Ангелина Ильинична
 * Группа: ПИ 11
 * Назначение: Вовзрат нескольих результатов
 */

#include <stdio.h>

int min_max(const int a[], int n, int *lo, int *hi) {
    if (n <= 0) {
        return 0;
    }

    int min = a[0];
    int max = a[0];

    for (int i = 1; i < n; ++i) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }

    *lo = min;
    *hi = max;
    return 1;
}

int main(void) {
    int arr[] = {4, -2, 7};

    int lo = 99, hi = 99;
    if (min_max(arr, 3, &lo, &hi)) {
        printf("n=3: success lo=%d hi=%d\n", lo, hi);
    } else {
        printf("n=3: fail lo=%d hi=%d\n", lo, hi);
    }

    lo = 99; hi = 99;
    if (min_max(arr, 1, &lo, &hi)) {
        printf("n=1: success lo=%d hi=%d\n", lo, hi);
    } else {
        printf("n=1: fail lo=%d hi=%d\n", lo, hi);
    }

    lo = 99; hi = 99;
    if (min_max(arr, 0, &lo, &hi)) {
        printf("n=0: success lo=%d hi=%d\n", lo, hi);
    } else {
        printf("n=0: fail lo=%d hi=%d\n", lo, hi);
    }

    lo = 99; hi = 99;
    if (min_max(arr, -1, &lo, &hi)) {
        printf("n=-1: success lo=%d hi=%d\n", lo, hi);
    } else {
        printf("n=-1: fail lo=%d hi=%d\n", lo, hi);
    }

    return 0;
}