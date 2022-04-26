#include <stdio.h>

int sum(int a) {
	if (a == 1) {
		return 1;
	} else if (a > 1) {
		return a + sum(a - 1);
	} else {
		printf("error");
	}
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", sum(n));
}
