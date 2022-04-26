#include <string.h>
#include <stdio.h>
#define N 20
void inv(char str[], int n);
int main() {
	char str[N];
	gets(str);
	inv(str, strlen(str));
	puts(str);
	return 0;
}
void inv(char str[], int n) {
	int i, j, temp;
	for (i = 0, j = n - 1; i < j; i++, j--) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}
