//ʮ����150  תΪ   8���Ƶ�ֵΪ226
//��д���� convert���������ʮ��������ת��Ϊ�˽��Ʋ������
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
