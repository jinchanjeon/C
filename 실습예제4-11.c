// file: floatcharscan.c
#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{
	double pi = 0.0;

	printf("�������� �Է��ϼ���. ");
	scanf("%lf", &pi);
	printf("%lf\n", pi);

	char ch1 = '\0', ch2 = '\0';
	printf("�����ڸ� �������� �� ���ڸ� �Է��ϼ���.\n");
	//���� �տ� ������ �ξ� enter�� ����, �����ڷ� ����(���� ���� ����)�� ���
	scanf(" %c %c", &ch1, &ch2);
	printf("ch1=%c ch2=%c\n", ch1, ch2);

	return 0;
}