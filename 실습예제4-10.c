// file: intscan.c
#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{
	int snum = 0, credit = 0;

	printf("����� �й��� ��û������? ");
	scanf("%d%d", &snum, &credit);

	printf("�й�: %d ��û����: %d\n", snum, credit);

	return 0;

}