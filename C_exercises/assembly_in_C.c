#include <stdio.h>

int main(void) {
    int num1=1, num2=2, sum;
    // __asm__ {movl: n1, num1
    //     movl: n2, num2
    //     addl: n1, n2
    //     movl: sum, n1
    // };

    printf("%d", sum);
    return 0;
}
