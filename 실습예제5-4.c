// file: increment.c

#include <stdio.h>

int main(void)
{
	int m = 10, n = 5;
	int result = 0;

	result = m++ + --n;	// m++�� 10, --n�� 4�̹Ƿ� 10 + 4�� 14, ���� m�� 11, n�� 4
	printf("m=%d n=%d result=%d\n", m, m, result);

	result = ++m - n--;	//++m�� 12, n--�� 4�̹Ƿ� 12-4�� 8, ���� m�� 12, n�� 3
	printf("m=%d n=%d result=%d\n", m, n, result);

	return 0;
}