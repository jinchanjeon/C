//file: shorteval.c

#include <stdio.h>

int main(void)
{
	int a = 10, b = 5, m = 1;
	int result;

	result = (a < b) && (m++ == 1);	//&&�� ������ 0�̹Ƿ� ������ ������ ���� �ʰ� 0���� �Ǻ�, m�� ������ ����
	printf("m=%d result=%d\n", m, result);

	result = (a > b) || (--m == 0);	//||�� ������ 1�̹Ƿ� ������ ������ ���� �ʰ� 1���� �Ǻ�, m�� ������ ����
	printf("m=%d result=%d\n", m, result);

	return 0;
}