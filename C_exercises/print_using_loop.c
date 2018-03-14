#include <stdio.h>

void print1() {
    switch (printf("Hello World!")) {}
}

void print2() {
    if (printf("Hello World!")) {}
}

void print3() {
    while (!printf("Hello World!")) {}
}

int main(void) {
    print1();
    return 0;
}
