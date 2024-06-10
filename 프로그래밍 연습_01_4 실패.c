/*file:continue.c

알고리즘:
1에서 100까지의 정수 중에서 2,3,5,7의 배수를 제외한 수를 한 행에 10개씩 출력하는 프로그램을 작성하시오.
*/

#define MIN 1
#define MAX 100
#define max 10

#include <stdio.h>

int main(void)
{
	int i = 0,j=0;

	printf("%d에서 %d까지 정수중 2으로 나누어 떨어지지 않는 수\n", MIN, MAX);
	
	for (i = MIN; i <= MAX; i++)
	{
		if ((i % 2 == 0)||(i%3==0)||(i%5==0)||(i%7==0))
		{
			continue;

			for (j = MIN; j <= max; j++)
			{
				printf("%d", j);
			}
		}
		
		
		printf("%3d", i);
	}
	
	return 0;
}