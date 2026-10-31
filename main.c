/*
 * Студент: Мареева Ангелина Ильинична
 * Группа: ПИ 11
 * Назначение: Вовзрат нескольих результатов
 */

#include <stdio.h>
int divide(int a, int b, int *q, int *r) {
    if (b == 0) return 0;
    *q = a / b;
    *r = a % b;
    return 1;
}
int main(void) {
    int a, b, q, r;
    if (scanf("%d %d", &a, &b) != 2) return 1;
    if (a < -1000 || a > 1000 || b < -1000 || b > 1000) return 1;
    if (divide(a, b, &q, &r))
        printf("q=%d r=%d\n", q, r);
    else
        puts("Zero divisior");
    return 0;
}