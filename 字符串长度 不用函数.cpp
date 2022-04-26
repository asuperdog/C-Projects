#include <stdio.h>

int strlen(char *s) {
	int sum;
	for (sum = 0; s[sum] != '\0'; sum++);
	return sum;
}

int main() {
	char a[50] = "sdcsd";
//	gets(a);
	printf("%d", strlen(a));
	return 0;
}
