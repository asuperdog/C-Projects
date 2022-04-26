#include <stdio.h>
//Ë®ÏÉ»¨Êı 
int main(void) {
	int a, b, c;
	for (int i = 100; i <= 999; i++) {
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;

		if (a * a * a + b * b * b + c * c * c == i) {
			printf("%d ", i);
		}
	}
	return 0;
}
