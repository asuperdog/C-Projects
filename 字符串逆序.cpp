#include <stdio.h>
#include <string.h>

void reserve(char st[]) {
	int start = 0;
	int end = strlen(st) - 1;

	while (start < end) {
		char t = st[start];
		st[start] = st[end];
		st[end] = t;
		
		start++;
		end--;
	}
}

//×Ö·û´®ÄæĞò
int main() {
	char str[10], *p = str;
	gets(p);
	reserve(str);
	printf("%s", str);
	return 0;
}
