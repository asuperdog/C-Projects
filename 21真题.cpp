#include <stdio.h>
// 函数法 
void fun01(char s[]) {
	int i, n = 0;
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] > '0' && s[i] < '9') {
			s[n++] = s[i];
		}
	}
	s[n] = '\0';
}

//指针法 
void fun02(char *st) {
	char *tmp;
	for (tmp = st; *tmp != '\0'; tmp++) {
		if (*tmp > '0' && *tmp < '9') {
			*st++ = *tmp;
		}
	}
	*st = '\0';
}

int main() {
	char str[50], *p;
	p = str;
	gets(p);
	fun02(p);
	puts(p);
	return 0;
}
