/* file:triangle.c

내부반복이 외부반복에 의존

알고리즘:
54321
5432
543
54
5
출력하는 프로그램
*/

#include <stdio.h>
#define MIN 1 
#define MAX 5

int main(void)
{
	int i = 0, j = 0;

	for (i = MIN; i <= MAX; i++)
	{
		for (j = MAX; i <= j; j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}

	return 0;
}