/* file:dowhile.c
   do while �ݺ�����
   
   do
   { �ݺ����� �ѹ��� ���� ��,
	 ������ ���� �� �����ϴ� �ݺ���;
	} (���ǹ�);
	
	�˰���:
		�Է����� ���� ������ ��� �Ǵ� �����̸� ��� �Է��� �ݺ��ϰ�,
		�Է��� ���� 0�̸� ���α׷��� ����Ǵ� ���α׷�
	*/

#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{
	int input = 0;

	do
	{
		printf("��� �Ǵ� 0(����)�� �Է�:");
		scanf("%d", &input);
	} while (input != 0);

	puts("�����մϴ�.");

	return 0;
}