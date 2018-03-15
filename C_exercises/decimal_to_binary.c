#include <stdio.h>
#include <math.h>

int main(void) {
    int dec=7, bin, size=4, arr[4]={}, i=0;

    while (dec>0) {
        bin = dec%2;
        arr[size-i-1] = bin;
        dec /= 2;
        printf("%d %d %d\n", i, dec, bin);
        i++;
    }

    printf("Decimal %d to Binary %d\n", dec, bin);
    for (int j=0; j<size; j++) {
        printf("%d ", arr[j]);
    }
    return 0;
}
