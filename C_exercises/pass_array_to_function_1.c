// Passing array directly to function

#include <stdio.h>

void fibonacciSeries(int Num, int arr[Num]) {
	arr[0] = 0; arr[1] = 1;
	for(int i=2; i<Num; i++) {
		arr[i] = arr[0] + arr[1];
		arr[0] = arr[1];
		arr[1] = arr[i];
	}
	arr[0] = 0; arr[1] = 1;
}

int main() {
	int Num=15, arr[Num];
	fibonacciSeries(Num, arr);
	for (int i=0; i<Num; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
 	return 0;
}
