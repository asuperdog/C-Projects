# include <stdio.h>
int main() {
	char str1[80], str2[40];
	int i = 0, j = 0;
	printf("please enter the first string:");
	gets(str1);
	printf("\nplease enter the second strings:");
	gets(str2);
	while (str1[i] != '\0')
		i++;
	while (str1[j] != '\0') {
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
	printf("\nAfter some characters string is£º%s \n", str1);
}

// Ö¸Õë·¨ 
int fun01() {
	char st1[50], st2[50], *p1, *p2;
	p1 = st1;
	p2 = st2;
	gets(p1);
	gets(p2);

	while (*p1 != '\0') {
		*p1++;
	}
	while (*p2 != '\0') {
		*p1++ = *p2++;
	}
	*p1++ = '\0';
	puts(st1);
}
