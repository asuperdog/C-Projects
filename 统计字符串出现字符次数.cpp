#include <stdio.h>

int fun(char *str, char ch) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if(ch == str[i]){
			count++;
		}
	}
	return count;
}

int main() {
	char str[20], c;
	gets(str);
	scanf("%c", &c);
	printf("%d", fun(str, c));
	return 0;
}
