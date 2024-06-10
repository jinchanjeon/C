/* file:forsum.c
for 반복문장

for(초기화; 반복조건 검사; 제어변수의 증감)
{
	반복조건이 참일 경우 실행하는 반복문'
}
알고리즘:
for문을 이용하여 1에서 10까지 합을 구하는 프로그램
*/

#include <stdio.h>

#define MIN 1	//반복 초기값을 MIN 매크로 상수로 정의
#define MAX 10	//반복 횟수를 MAX 매크로 상수로 정의

int main(void)
{
	int i = 0, sum = 0;
	
	printf("\n**가장 표준적인 for문**\n");
	i = 0, sum = 0;
	for (i = MIN; i <= MAX; i++)
	{
		sum += i;	//sum=sum+i; 0+1+2+3+4.....+10
	}
	printf("%d에서 %d까지 합: %3d\n", MIN, MAX, sum);

	printf("\n\n**나쁜 형태: 중괄호 생략 for문**\n");
	for (i = 1, sum = 0; i <= 10; i++)	//++i도 가능
		sum += i;	//sum=sum+i;
	printf("1에서 10까지 합: %3d\n", sum);

	printf("\n\n**나쁜 형태: 증감 생략 for문**\n");
	for (i = 1, sum = 0; i <= 10;)
	sum += i++;
	printf("1에서 10까지 합:%3d\n", sum);

	printf("\n\n**나쁜 형태: 전위 증감 이용 for문**\n");
	for (i = 0, sum = 0; i <= 9;)
		sum += ++i;
	printf("1에서 10까지 합:%3d\n", sum);

	printf("\n\n**나쁜 형태:한 문장으로 작성한 for 문**\n");
	for (i = 1, sum = 0; i <= 10; sum += i++);	//반복몸체가 없는 for문
	printf("1에서 10까지 합: %3d\n", sum);

	return 0;

}