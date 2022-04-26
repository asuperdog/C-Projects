#include <stdio.h>
#include <string.h>

int main( ) {
	char str[50];
	gets(str);
	int num = 0, letter = 0, chars = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			num++;
		} else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
			letter++;
		} else {
			chars++;
		}
	}

	printf("Êý×Ö:%d, ×ÖÄ¸:%d, ×Ö·û:%d", num, letter, chars);

	return 0;
}
