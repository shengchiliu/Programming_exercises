#include<stdio.h>

int main() {
    int n = 123, r, sum = 0, temp;
    temp = n;
    while(n>0) {
        r = n%10;
        sum = (sum*10)+r;
        n = n/10;
    }

    if(temp == sum) {
        printf("Palindrome Number!");
    }
    else {
        printf("Not Palindrome Number!");
    }
    return 0;
}
