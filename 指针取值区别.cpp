#include <stdio.h>
#include <string.h>
#include <math.h>
#define N 4

struct stu {
	int x;
	int *y;
} *p;

int dt[4] = {10, 20, 30, 40};
struct stu a[4] = {50, &dt[0], 60, &dt[1], 70, &dt[2], 80, &dt[3]};

int main() {
	p = a;
	printf("%d, ", ++p->x); //51
	printf("%d, ", (++p)->x); //60
	printf("%d\n", ++ * (p->y)); //21
	return 0;
}
