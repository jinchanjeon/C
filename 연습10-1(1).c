/*�ǽ����� 10-1 file:functionadd2.c

[�˰���]
1. �� ���� ���� ���ϴ� �Լ�
2. �� ���� �ּҰ��� ���ϴ� �Լ�
3. �� ���� �ִ밪�� ���ϴ� �Լ�

*/

#include <stdio.h>

int f_add2(int a, int b);
int f_findMin2(int x, int y);
int f_findMax2(int x, int y);

int main(void)
{
	int a = 2, b = 3;
	int add2_result = 0, findMin2_result = 0, findMax2_result = 0;

	 add2_result = f_add2(a, b);
	 findMin2_result = f_findMin2(a, b);
	 findMax2_result = f_findMax2(a,b);

	 printf("%d�� %d�� ���� %d�Դϴ�.\n\n",a,b,add2_result);
	 printf("%d�� %d�� �ּҰ��� %d�Դϴ�.\n\n", a, b, findMin2_result);
	 printf("%d�� %d�� �ִ밪�� %d�Դϴ�.\n\n", a, b, findMax2_result);

	 return 0;
}

int f_add2(int a, int b)
{
	int sum = a + b;

	return sum;
}

int f_findMin2(int x, int y)
{
	int min = x < y ? x : y;

	return min;
}

int f_findMax2(int x, int y)
{
	int max = x > y ? x : y;

	return max;
}
