#include <stdio.h>

int main(void) {
    int n = 0;

    for (int i=0; i<=4; i++) {

        for (int j=0; j<=4; j++) {

            for (int k=0; k<=4; k++) {
                if (i!=j && j!=k && i!=k) {
                    ++n;
                    printf("%d%d%d, %d\n", i, j, k, n);
                }
            }
        }
    }

    return 0;
}