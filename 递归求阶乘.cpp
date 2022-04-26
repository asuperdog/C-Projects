#include <stdio.h>

int f(int a) {
	if (a == 0 || a == 1) {
		return 1;
	} else if (a > 1) {
		return a * f(a - 1);
	} else {
		return -1;
	}
}

int main(void) {
	int n;
	scanf("%d", &n);
	printf("%d\n", f(n));
}
