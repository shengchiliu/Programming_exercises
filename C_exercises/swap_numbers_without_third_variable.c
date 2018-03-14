#include <stdio.h>

void swap1(int *p1, int *p2) {
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
}

void swap2(int *p1, int *p2) {
    *p1 = *p1 * *p2;
    *p2 = *p1 / *p2;
    *p1 = *p1 / *p2;
}

int main(void) {
    int n1=123, n2=456, *p1=&n1, *p2=&n2;
    swap1(p1, p2);
    printf("%d%s%d\n", n1, " ", n2);
    return 0;
}
