#include <stdio.h>

int main(void) {
    int n=12345, r, sum=0;
    while (n>0) {
        r = n % 10;
        sum += r;
        n /= 10;
    }
    printf("%d\n", sum);
}
