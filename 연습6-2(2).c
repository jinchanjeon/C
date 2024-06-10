/*file: ifelse.c
조건문 2개
if (조건문이 참이면);
	printf("실행문");
else(조건문이 거짓이면);
	printf("실행문");

printf("입니다.\n");

알고리즘: 
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n = 0;
	printf("정수입력: ");
	scanf("%d", &n);

	//부정적인
	if(n % 2!= 0)
	{
		printf("%d는 홀수",n);
	}
	else
	{
		printf("%d는 짝수",n);
	}
	printf("입니다.\n");
	//긍정적인
	
	if(n % 2 == 0)
	{
		printf("%d는 짝수",n);
	}
	else
	{
		printf("%d는 홀수",n);
	}
	printf("입니다.\n");
	//삼항조건연산자
	(n % 2) ? printf("%d는 홀수",n) : printf("%d는 짝수",n);
	printf("입니다.\n");

	return 0;
}