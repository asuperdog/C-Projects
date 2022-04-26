#include <stdio.h>
//ì³²¨ÄÇÆõÊıÁĞ
int main() {
	int n, next;
	int	t1 = 0, t2 = 1;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		next = t1 + t2;
		t1 = t2;
		t2 = next;
		printf("%d, ", t1);
	}
	
	return 0;
}
