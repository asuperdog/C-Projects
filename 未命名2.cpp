#include <stdio.h>

void input() {

}

//ц╟ещеепР
int main() {
	int arr[10] = {49, 38, 65, 97, 76, 13, 27, 49, 55, 4};


	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		for (int i = 0; i < 10; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
	}

	return 0;
}
