/*file:ifelse.c
������ 2���� ���
if(���ǹ�)
{
	printf("���ǹ��� ���� �� ���๮");
}
else(���ǹ�)
{
	printf("���ǹ��� ������ �� ���๮");
}

�˰���: 
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n = 0;
	printf("�����Է�: ");
	scanf("%d", &n);

	//����
	if (n % 2 != 0)
	{
		printf("%d�� Ȧ��",n);
	}
	else
	{
		printf("%d�� ¦��", n);
	}
	printf("�Դϴ�.\n");

	//����
	if (n % 2 == 0)
	{
		printf("%d�� ¦��", n);
	}
	else
	{
		printf("%d�� Ȧ��", n);
	}
	printf("�Դϴ�.\n");

	//�������ǿ�����
	(n % 2) ? printf("%d�� Ȧ��", n) : printf("%d�� ¦��", n);
	printf("�Դϴ�.\n");

	return 0;

}
