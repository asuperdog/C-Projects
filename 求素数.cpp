#include<stdio.h>
#include<math.h>
int main() {
	int i, j;
	for (i = 100; i <= 200; i++) {
		int k = sqrt(i);
		for (j = 2; j <= k; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (j > k) {
			printf("%d ", i);
		}
	}
	return 0;
}
