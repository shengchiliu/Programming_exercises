#include <stdio.h>

int main(void) {
    int factorial=1, n=5;

    for (int i=1; i<=n; i++) {
        factorial *= i;
    }
    printf("%d", factorial);
}
