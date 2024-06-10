/*file:file:forbasic.c

for 반복문장
for(초기화;반복조건 검사; 제어변수의 증감)
{
	반복조건이 참일 경우 실행하는 반복문;
}

알고리즘:
printf("c언어 재미있네요! \n");
printf("c언어 재미있네요! \n");
printf("c언어 재미있네요! \n");
printf("c언어 재미있네요! \n");
printf("c언어 재미있네요! \n");
반복문을 이용하여 5번 출력하는 프로그램
*/

#include <stdio.h>
#define MIN 4	//반복 횟수를 MIN 매크로 상수로 정의
#define MAX 10	//반복 횟수를 MAX 매크로 상수로 정의

int main(void)
{
	int i = 0;

	for (i = MIN; i <= MAX; i++)	//for(i=4;i<=10;i++)
	{
		printf("c언어 재미있네요! %d\n", i);
	}
	printf("\n제어변수 i=> %d\n", i);

	return 0;
}