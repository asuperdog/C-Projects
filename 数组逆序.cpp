#include <stdio.h>

int main(void) {
	int arr[6] = {3, 0, 6, 2, 4, 7};

	for (int i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	int start = 0;
	int end = 5;

	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}

	for (int i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
