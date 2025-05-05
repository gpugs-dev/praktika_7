#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a = 10, b = 25;
    printf("Максимум из %d и %d: %d\n", a, b, max(a, b));
    return 0;
}