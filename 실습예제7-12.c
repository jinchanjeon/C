/*file:inputsum.c

for 반복문장과 while 반복문장 비교
for(초기화;반복조건 검사; 제어변수의 증감)
{
  반복조건이 참일 경우 실행하는 반복문'
}

while 반복문장
while(조건문)
{
	조건이 참일 때 실행하는 반복문;
}

do 반복문장
do
{
	조건이 참일 때 실행하는 반복문;
}while(조건문);

알고리즘:
1부터 입력 받은 양의 정수까지 합을 for문과 while문과 do~while문으로 각각 구하는 프로그램
*/

#define _CRT_SECURE_NO_WARNINGS	//scanf()오류를 방지하기 위한 상수 정의

#include <stdio.h>

#define MIN 1	//반복 초기값을 MIN매크로 상수로 정의

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

	i = MIN, sum = 0;
	while (i <= max)
	{
		sum += i;
		i++;	
	}
	printf("while문으로 구한 %d에서 %d까지 합: %3d\n", MIN, max, sum);

	i = MIN, sum = 0;
	do
	{
		sum += i;
		i++;
	} while (i <= max);
	printf("do~while문으로 구한 %d에서 %d까지 합:%3d\n", MIN, max, sum);

	return 0;
}