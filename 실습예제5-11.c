// file: typecast.c

#include <stdio.h>

int main(void)
{
	int a = 3.4;	//�ڵ����� ������ȯ�Ǿ� ���� a���� 3�� ����
	double d = 3;	//�ڵ����� �ø���ȯ�Ǿ� ���� d���� 3.0�� ����

	printf("%5d %10lf \n", a, d);	// 3 3.000000
	printf("%10lf\n", 3 + 4.5);	// 7.500000

	printf("%5d\n", 10 / 4);	//2
	printf("%10lf\n", (double)10 / 4);	//2.5000000
	printf("%10lf\n", 10 / (double)4);	//2.5000000
	printf("%10lf\n", (double)(10 / 4));	//2.0000000

	printf("%5d\n", (int)(3.4 + 7.8));	//11
	printf("%10d\n", (int)3.4 + (int)7.8);	//10
	printf("%10lf\n", (int)3.4 + 7.8);	// 10.800000
	printf("%10lf\n", 3.4 + (int)7.8);	// 10.400000

	return 0;
}