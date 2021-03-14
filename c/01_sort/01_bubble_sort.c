#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void BubbleSort(int *arr) {
	int i, tmp, flag;

	do {
		flag = 0;
		for (i = 0; i < N - 1; ++i) {
			if (arr[i] > arr[i + 1]) {
				flag = 1;
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	} while (flag == 1);
}

int main(void) {
	int i, arr[N];

	printf("Ready for sort:\n");
	srand((unsigned int)time(NULL));
	for (i = 0; i < N; ++i) {
		arr[i] = rand() % 1000;
		printf("%d ", arr[i]);
	}
	
	printf("\n\nBegin sorting...\n");
	BubbleSort(arr);

	printf("\nEnd sorting:\n");
	for (i = 0; i < N; ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}