#include <stdio.h>

void f1() {
	for (int j = 1; j <= 4; j++) {
		printf("\n");
		for (int i = 1; i <= 5; i++) {
			printf("%3d", i * j);
		}
	}
}

// 99³Ë·¨±í 
void f2() {
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d*%d=%2d ", j, i, i * j);
		}
		printf("\n");
	}
}

int main(void) {
	f1();
	printf("\n\n\n");
	f2();
	return 0;
}
