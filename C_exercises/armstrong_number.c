#include<stdio.h>

int main(void) {
    int n = 153, r, sum=0, temp=n;

    while (n>0) {
        r = n % 10;
        sum += r*r*r;
        n /= 10;
    }

    if (temp == sum) {
        printf("Armstrong Number!");
    }
    else {
        printf("Not Armstrong Number!");
    }

    return 0;
}
