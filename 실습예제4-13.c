// file: putchar.c

#include <stdio.h>

int main(void)
{
	char a = '\0';

	puts("���� �ϳ� �Է�:");
	a = getchar();

	puts("�Էµ� �ϳ� ����:");
	putchar(a); putchar('\n');

	return 0;

}