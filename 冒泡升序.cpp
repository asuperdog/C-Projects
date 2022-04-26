#include <stdio.h>

void input() {

}

//ц╟ещеепР 
int main() {
	int arr[5], i;
	for (i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	
	
	for (i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
			int temp = 0;
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
