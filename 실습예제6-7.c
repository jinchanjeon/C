/*file:switch.c
switch��: ���갪�� ���� �Ǵ� ������ �� ���

switch(������)
{
	case���1:
			����İ��� ��� 1�̸� ������ ��ɵ�...
			break:
	case���2:
			����İ��� ���2�̸� ������ ��ɵ�...
			break:
	case���3:
			����İ��� ���3�̸� ������ ��ɵ�...
			break:
			:
			:
	default:
			����İ��� ���� �������� ��ġ�ϴ� ���� ���ٸ� ������ ��ɵ�...
			break:
}

	�˰���:
	-�� ���� �Ǽ���, ���������� �Է� �޾Ƽ�,
	����, ����, ����, ������, ������ ������ ����
*/

#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{
	double x = 0.0, y = 0.0;
	int op = 0;
	printf("�� �Ǽ� �Է�:");
	scanf("%lf %lf", &x, &y);

	printf("�������� ��ȣ���� 1(+), 2(-),3(*),4(/),5(%%):");
	scanf("%d", &op);

	/*if~else if��*/
	printf("\n\n*****lf~else if��\n");

	if (op == 1)
	{
		printf("%.2lf+%.2lf=%.2lf\n", x, y, x + y);
	}
	else if (op == 2)
	{
		printf("%.2lf-%.2lf=%.2lf\n", x, y, x - y);
	}
	else if (op == 3)
	{
		printf("%.2lf*%.2lf=%.2lf\n", x, y, x * y);
	}
	else if (op == 4)
	{
		printf("%.2lf/%.2lf=%.2lf\n", x, y, x / y);
	}
	else if (op == 5)
	{
		printf("%4d%%%4d=%4d\n", (int)x, (int)y, (int)x % (int)y);
	}
	else
	{
		printf("��ȣ�� �߸� �����߽��ϴ�.\n");
	}

	/*switch��*/
	printf("\n\n*****switch \n");

	switch (op)
	{
	 case 1:
		printf("%.2lf+%.2lf=%.2lf\n", x, y, x + y);
		break;
	 case 2:
		printf("%.2lf-%.2lf=%.2lf\n", x, y, x - y);
		break;
	 case 3:
		printf("%.2lf*%.2lf=%.2lf\n", x, y, x * y);
		break;
	 case 4:
		printf("%.2lf/%.2lf=%.2lf\n", x, y, x / y);
		break;
	 case 5:
		printf("%4d %% %4d=%4d\n", (int)x, (int)y, (int)x % (int)y);
		break;
	 default:
		printf("��ȣ�� �߸� �����߽��ϴ�.\n");
		break; //��������
	}

	return 0;
}