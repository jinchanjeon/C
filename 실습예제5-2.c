// file: assignment.c

#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, c = 0;
	a = b = c = 5;	//(a = (b = (c = 5)))

	printf("a = a +2 ==> %d\n", a = a + 2);	// a= a + 2 ==>7
	printf("a ==> %d\n", a);	// a ==> 7
	printf("a = b + c ==> %d\n", a = b + c);	// a = b + c ==> 10
	printf("a ==> %d\n", a);	// a ==> 10

	return 0;
}