#include <stdio.h>
#define N 4
/*�Ӽ��������10�������У��ҳ���һ���ܱ�7����������
���ҵ�����ӡ�������˳�ѭ������δ�ҵ�����ӡ"not  exist"��*/
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
