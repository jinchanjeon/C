// file: putchar.c

#include <stdio.h>

int main(void)
{
	char a = '\0';

	puts("문자 하나 입력:");
	a = getchar();

	puts("입력된 하나 문자:");
	putchar(a); putchar('\n');

	return 0;

}