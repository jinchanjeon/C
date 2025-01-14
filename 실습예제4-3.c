// 실습예제 4-2
// file: printfintro.c

#include <stdio.h>

int main(void)
{
	int n = 16, ret_value = 0;

	ret_value = printf("Hello!\n");
	printf("printf() 반환 값(출력된 문자수): %\n", ret_value);

	printf("\n123456789012345678901234567890\n");
	ret_value = printf("출력 값: %d %i %o %#o %#x %#X\n", n, n, n, n, n, n);
	printf("반환 값(출력된 문자수): %d\n", ret_value);

	printf("%d %i\n", 16, 16);	//16 16 출력
	printf("%o %#o\n", 16, 16);	//20 020 팔진수 출력
	printf("%x %#x %#X\n", 10, 10, 10);	//a 0xa 0XA 십육진수 출력

	return 0;
}