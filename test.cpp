#include <stdio.h>
#define N 4
/*从键盘输入的10个整数中，找出第一个能被7整除的数。
若找到，打印此数后退出循环；若未找到，打印"not  exist"。*/
int main() {
	int arr[10];

	for (int i = 0; i < 4; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 4; i++) {
		if (arr[i] % 7 == 0) {
			printf("%d\n", arr[i]);
			break;
		}
		if (i == N - 1) {
			printf("not exist\n");
		}
	}
}
