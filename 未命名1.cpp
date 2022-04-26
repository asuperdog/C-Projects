#include<stdio.h>


int main() {
	int arr[] = {49, 38, 65, 97, 76, 13, 27, 49, 55, 4};
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		printf("µÚ%2dÌË: ", i + 1);
		for (int i = 0; i < len; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
	}

//	for (int i = 0; i < 12; i++) {
//		printf("%d ", arr[i]);
//	}

	return 0;
}
