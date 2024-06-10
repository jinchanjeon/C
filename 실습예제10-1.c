/*�ǽ����� 10-1 file:functionadd2.c

[�˰���]
1. �� ���� ���� ���ϴ� �Լ�
2. �� ���� �ּҰ��� ���ϴ� �Լ�
3. �� ���� �ִ밪�� ���ϴ� �Լ�

*/

#include <stdio.h>

int f_add2(int a, int b);	//�Լ�����: �� ���� ���� ���ϴ� �Լ�

int f_findMin2(int x, int y);	//�Լ�����: �� ���� �ּҰ��� ���ϴ� �Լ�

int f_findMax2(int x, int y);	//�Լ�����: �� ���� �ִ밪�� ���ϴ� �Լ� 
// ���ĸŰ����� ������ ���� �޶� ��. �ǸŰ������� ���ĸŰ������� ���� �޶� ��


int main(void)
{
	int a = 3, b = 5;
	int add2_result = 0, findMin2_result = 0, findMax2_result = 0;

	add2_result = f_add2(a, b);	//�Լ� ȣ��: �� ���� ���� ���ϴ� �Լ�

	findMin2_result = f_findMin2(a, b);	//�Լ�ȣ��: �� ���� �ּҰ��� ���ϴ� �Լ�

	findMax2_result = f_findMax2(a, b);	//�Լ�ȣ��: �� ���� �ִ밪�� ���ϴ� �Լ�
	
	printf("%d+%d=%d�Դϴ�.\n\n", a, b, add2_result);	//3+5=8�Դϴ�.

	printf("%d�� %d�� �ּҰ��� %d�Դϴ�.\n\n", a, b, findMin2_result);	//3�� 5�� �ּҰ��� 3�Դϴ�.

	printf("%d�� %d�� �ִ밪�� %d�Դϴ�.\n\n", a, b, findMax2_result);	//3�� 5�� �ִ밪�� 5�Դϴ�.

	return 0;
}

//�Լ� add2�� �Լ����� �κ�
int f_add2(int a, int b)
{
	int sum = a + b;

	return sum;	//��ȣ�� ���� ����
}

//�Լ� f_findMin2�� �Լ����� �κ�
int f_findMin2(int x, int y)
{
	int min = x < y ? x : y;

	return min;
}

//�Լ� f_findMax2�� �Լ����� �κ�
int f_findMax2(int x, int y)
{
	int max = x > y ? x : y;

	return max;
}
