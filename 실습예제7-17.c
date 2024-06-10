/*file:nestedloop.c
	중첩된 반복문: 반복문 내에 반복문이 또 있는 구분
	알고리즘:
		외부반복에서 1에서 5까지, 내부반복에서 1에서 7까지 반복하면서 각각의 변수값을 출력하는 프로그램
*/

#include <stdio.h>

int main(void)
{
	int m = 0, n = 0;

	for (m = 1; m <= 5; m++)
	{
		printf("m=%-2d\n", m);

		for (n = 1; n <= 7; n++)
		{
			printf("n=%-3d", n);
		}
		printf("\n\n");
	}

	return 0;
}