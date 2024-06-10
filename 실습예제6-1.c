/* file:if.c 
 조건이 하나인 경우
 
	if(조건문)
	{
		조건이 참일 때 실행문;
	}
	알고리즘:
	-표준입력으로 받은 온도가 32도 이상이면 "폭염 주의보를 발령하빈다"와 "건강에 유의하세요"를 출력
	-온도와 상관없이 항상 현재 온도를 출력하는 프로그램
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double temperature = 0.0;

	printf("현재 온도 입력: ");
	scanf("%lf", &temperature);

	if (temperature >= 32.0)
	{
		printf("폭염 주의보를 발령합니다.\n");
		printf("건강에 유의하세요.\n");
	}
	printf("현재 온도는 섭씨 %.2f 입니다.\n", temperature);

	return 0;
}