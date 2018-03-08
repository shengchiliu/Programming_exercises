// Pass the returned array as parameter

#include <stdio.h>

void fibonacciSeries(int arr[], int size) {
	arr[0] = 0; arr[1] = 1;
	for(int i=2; i<size; i++) {
		arr[i] = arr[0] + arr[1];
		arr[0] = arr[1];
		arr[1] = arr[i];
	}
	arr[0] = 0; arr[1] = 1;
}

int main(void) {
	int Num=15, arr[Num];
	fibonacciSeries(arr, Num);
	for (int i=0; i<Num; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
 	return 0;
}
