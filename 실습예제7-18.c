/*file:triangle.c

내부반복이 외부반복에 의존

알고리즘:
*
**
***
****
*****
별을 삼각형 모양으로 출력하는 프로그램

*****
****
***
**
*

*/

#include <stdio.h>

#define MIN 1	//반복 초기값을 MIN 매크로 상수로 정의
#define MAX 5	//반복 횟수를 MAX 매크로 상수로 정의

int main(void)
{
	int i = 0, j = 0;

	for (i = MIN; i <= MAX; i++)
	{
		for (j = MIN; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = MIN; i <= MAX; i++)
	{
		for (j = MAX; i <= j; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}