// Return pointer pointing at array from function

#include <stdio.h>

int * fibonacciSeries(int * arr, int size) {
	arr[0] = 0; arr[1] = 1;
	for(int i=2; i<size; i++) {
		arr[i] = arr[0] + arr[1];
		arr[0] = arr[1];
		arr[1] = arr[i];
	}
	arr[0] = 0; arr[1] = 1;
	return arr;
}

int main() {
	int Num=15, arr[Num], * p;
	p = fibonacciSeries(arr, Num);
	for (int i=0; i<Num; i++) {
		printf("%d ", p[i]);
	}
	printf("\n");
 	return 0;
}
