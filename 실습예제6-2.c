/*file: ifelse.c
조건이 2개인 경우

if(조건문)
{
	조건이 참일 때 실행문;
}
else
{
	조건이 거짓일 때 실행문;
}

알고리즘:
-표준입력으로 받은 정수의 짝수와 홀수를 판별하는 프로그램

*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n = 0;
	
	printf("정수 입력: ");
	scanf("%d", &n);

	/*부정적인 마인드를 가진 사람*/
	if (n % 2 != 0)
	{
		printf("%d는 홀수", n);
	}
	else
	{
		printf("%d는 짝수", n);
	}
	printf("입니다.\n");

	/*긍정적인 마인드를 가진 사람*/
	if (n % 2 == 0)
	{
		printf("%d는 짝수", n);
	}
	else
	{
		printf("%d는 홀수", n);
	}
	printf("입니다.\n");

	//삼항조건연산자 이용
	(n % 2) ? printf("%d는 홀수", n) : printf("%d는 짝수", n);
	printf("입니다.\n");

	return 0;
}

