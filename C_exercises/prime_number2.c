#include <stdio.h>

int main(void) {
    int n=100, m, flag;

    for (int i=3; i<=n; i++) {
        m = i/2+1;                  //inside the loop, i replaces n
        flag = 0;

        for (int j=2; j<=m; j++) {
            if ( i%j==0 ) {         //inside the loop, j replaces m
                flag = 1;
            }
        }
        if (flag==1) {
            printf("%d is not prime\n", i);
        } else {
            printf("%d is prime\n", i);
        }
        
    }
}