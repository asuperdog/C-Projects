#include "stdio.h"
#define N 3

// Ã°ÅÝ ½µÐò 
main() {
	int i, j, t, str[N];
	for (i = 0; i < N; i++) {
		scanf("%d", &str[i]);
	}

	for (i = 0; i < N - 1; i++) {
		for (j = 0; j < N - 1 - i; j++) {
			if (str[i] < str[i + 1]) {
				t = str[i + 1];
				str[i + 1] = str[i];
				str[i] = t;
			}
		}
	}
	
	for (i = 0; i < N; i++) {
		printf("%d ", str[i]);
	}
}


/*
	09 11 23
	06 01 15
	09 17 20
*/
