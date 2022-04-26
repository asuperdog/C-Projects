#include <stdio.h>
#include <string.h>

int main () {
	int fun01();
	char str[] = "2022", *pa;
	int s = 0;
	pa = str;
	while (*pa != '\0') {
		s += *pa - '0';
		pa++;
	}
	printf("%d\n", s);
	fun01(); // ·¨2 
	return 0;
}

void fun01() {
	int i = 2022, sum = 0, a;
//	scanf("%d", &i);
	while (i > 0) {
		a = i % 10;
		sum += a;
		i = i / 10;
	}
	printf("%d\n", sum);
}
