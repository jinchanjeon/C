/*file: ifelse.c
������ 2���� ���

if(���ǹ�)
{
	������ ���� �� ���๮;
}
else
{
	������ ������ �� ���๮;
}

�˰���:
-ǥ���Է����� ���� ������ ¦���� Ȧ���� �Ǻ��ϴ� ���α׷�

*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n = 0;

	printf("�����Է�: ");
	scanf("%d, &n");

	if (n % 2 == 0)
	{
		printf("%d�� ¦��",n);
	}
	else
	{
		printf("%d�� Ȧ��".n);
	}
	printf("�Դϴ�.\n");

	return 0;
}