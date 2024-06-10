// file: comma.c

#include <stdio.h>

int main(void)
{
	int a = 100, b = 50, c;

	printf("%d\n", sizeof(int));	//4
	printf("%d\n", sizeof a);	//4
	printf("%d\n", sizeof(double));	//8
	printf("%d\n", sizeof 3.14);	//8

	c = ++a, b++;	//(c = ++a), (b++); 이므로 a, b, c에는 각각 101, 51, 101
	printf("%d %d %d\n", a, b, c);

	c = (3 + a, b * 2);	//변수 c에 저장되는 값은 b*2 이므로 102
	printf("%d %d %d\n", a, b, c);

	return 0;

}