#include <stdio.h>

int main(void) {
    int n=12345, r, rev=0;
    while (n>0) {
        r = n % 10;
        rev = rev*10 + r;
        n /= 10;
    }
    printf("%d\n", rev);
}
