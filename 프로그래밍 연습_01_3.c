/*file:forsum.c

알고리즘:
1에서부터 표준입력으로 받은 양의 정수까지의 합을 출력하는 프로그램을 작성하시오.
*/
#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#define MIN 1

int main(void)
{
	int i = 0, sum = 0, max = 0;
	
	printf("%d에서부터 정수까지의 합을 구할 양의 정수 하나 입력:", MIN);
	scanf("%d", &max);

	i = 0, sum = 0;
	for (i = MIN; i <= max; i++)
	{
		sum += i;
	}
	printf("\nfor문으로 구한 %d에서 %d까지 합: %3d\n", MIN, max, sum);

	printf("1에서부터 정수까지의 합을 구할 양의 정수 하나 입력:");
	scanf("%d", &max);

		i = 0, sum = 0;
		for (i = MIN; i <= max; i++)
		{
			sum += i;

		}
		printf("\nfor문으로 구한 1에서 %d까지 합: %d\n", max, sum);


		return 0;

}	//printf("1에서 %d까지의 합을 구할 양의 정수 하나 입력:", max);가 안되는 이유: max가 0으로 돼서 결과가 '1에서 0까지의 ~~'로 나옴. 그래서 밑에 scanf("%d", &max);  써줘야함
