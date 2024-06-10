// file: logic.c

#include <stdio.h>

int main(void)
{
	char null = '\0', a = 'a';
    int zero = 0, n = 10;
	double dzero = 0.0, x = 3.56;

	printf("!zero : %d\n", !zero);	// !0 --> 1
	printf("zero && x : %d\n", zero && x);	// 0 && 3.56 -> 0
	printf("dzero || null : %d\n", dzero || null);	// 0 ll \0 --> 0
	printf("n && x : %d\n", n && x);	// 10 && 3.56 --> 1
	printf("a || null : %d\n : %d\n", a || null);	// a(97) || \0 --> 1
	printf("java && C Lang : %d\n", "java" && "C Lang");	// 1&& 1 --> 1

	return 0;
}