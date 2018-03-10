#include <stdio.h>

int main(void) {
    int n, m, flag = 0;
    printf("Enter a number:");
    scanf("%d", &n);

    m = n/2;
    for (int i=2; i<=m; i++) {
        if (n%i == 0) {
            printf("Not Prime!");
            flag=1;
            break;
        }
    }
    if (flag == 0) {
        printf("Prime!");
    }
    printf("\n");
    return 0;
}
