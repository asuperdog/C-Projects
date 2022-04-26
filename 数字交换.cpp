#include <stdio.h>
void swap(int *p1, int*p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main() {
	int a, b;
	int max = 0;
	scanf("%d %d", &a, &b);
	swap(&a, &b);
	if (a > max) {
		max = a;
	} else if (b > max) {
		max = b;
	}
	printf("%d %d \nmax=%d", a, b, max);
	return 0;
}
