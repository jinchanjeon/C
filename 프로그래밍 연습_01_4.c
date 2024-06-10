/*알고리즘:
1에서 100까지의 정수 중에서 2, 3, 5, 7의 배수를 제외한 수를 한 행에 10개씩 출력하는 프로그램을 작성하시오.
*/

#include <stdio.h>
#define MIN 1
#define MAX 100

int main(void)
{
	
	int i = 0, j = 0;
	printf("1에서 100까지의 정수 중에서 2,3,5,7의 배수를 제외한 수\n");
	for (i = MIN; i <= MAX; i++)
	{
		if ((i % 2 == 0)|| (i % 3 == 0)||(i % 5 == 0) ||(i % 7 == 0))
		{
			continue;
		}
		else
		{
			for (j = 0; j <= 10; j++)
			{
				printf("%d", i);
			}
		}
		
		
		printf("\n");
	}

	return 0;
}