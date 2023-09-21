#include <stdio.h>

int fibonacci_iterative(int limit) {
    int a = 0, b = 1, next = 0;

    while (a < limit) {
        // printf("%d\n", a);
        next = a + b;
        a = b;
        b = next;
    }
    return next - a;
}

int main() {
    int elemento = 5;
    printf("Elemento %d = %d\n", elemento, fibonacci_iterative(elemento));
    return 0;
}
