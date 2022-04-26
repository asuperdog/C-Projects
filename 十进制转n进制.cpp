//十进制150  转为   8进制的值为226
//编写函数 convert，将输入的十进制整数转换为八进制并输出。
#include<stdio.h>
int convert(int n) {
	int temp;
//	if (n == 0) {
//		return 0;
//	} else {
		temp = n % 2;
		n = n / 2;
		convert(n);
		return temp;
//	}
}

int main() {
	int num, rs;
	scanf("%d", &num);
	rs = convert(num);
	printf("%d", rs);
	return 0;
}
