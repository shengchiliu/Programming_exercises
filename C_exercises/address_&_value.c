#include <stdio.h>

int main(void) {
    int n = 50;
    int *p;
    p = &n;
    printf("Address of p variable is %p \n", p);
    printf("Value of p variable is %d \n", *p);
    return 0;
}
