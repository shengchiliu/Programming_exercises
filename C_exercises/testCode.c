#include <stdio.h>

int main() {
    int number = 50;
    int *p;
    p = &number;
    printf("Address of p variable is %x \n",p);
    printf("Value of p variable is %d \n",*p);
    return 0;
}
