/*file:seasonswitch.c
switch������ �������� ����� ����:���갪�� ���� �Ǵ� ������ �� ���

switch(�����)
{
	case ���1: case ���2
	 ����İ��� ���1�̰ų� ���2�̸� ������ ��ɵ�...
	 break;
	case ���3:
	 ����İ��� ���2�̸� ������ ��ɵ�...
	 break;
	case ���4;
	 ����İ��� ���3�̸� ������ ��ɵ�...
	 break;
	 :
	 :
	default:
	  ����İ��� ���� �������� ��ġ�ϴ� ���� ���ٸ� ������ ��ɵ�...
	  break;
}

	�˰���:
	-1���� �ش���� �Է� �޾Ƽ�,
	4��~5��:"�� �Դϴ�."
	6��~8��:"�����Դϴ�."
	9��~11��: "�����Դϴ�."
	12��,1��~3��:"�ܿ��Դϴ�."
	�ƴϸ�:"�߸� �Է� �ϼ̽��ϴ�."
	*/

#define _CRT_SECURE_NO_WARNINGS //scanf()������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{
	int month = 0;

	printf("�⵵�� ��(month)�� �Է�:");
	scanf("%d", &month);

	switch (month)
	{
	case 4:case 5:
		printf("%d���� ���Դϴ�.\n", month);
		break;

	case 6:case 7: case 8:
		printf("%d���� �����Դϴ�.\n", month);
		break;

	case 9:case 10: case 11:
		printf("%d���� �����Դϴ�.\n", month);
		break;

	case 12:case 1:case 2: case 3:
		printf("%d���� �ܿ��Դϴ�.\n", month);
		break;

	default:
		printf("��(month)�� �߸� �Է��ϼ̽��ϴ�.\n");
		break;
	}

	return 0;
}