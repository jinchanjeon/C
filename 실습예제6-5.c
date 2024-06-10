/*file:ifelse.c
중첩된 조건인 경우
	if(조건문1)
	{
		if(조건문2)
		{
			조건1이 참이고, 조건2가 참일 때 실행문;
		}
	}
	else if(조건문3)
	{
		조건3이 참일 때 실행문;
	}
	else if(조건문4)
	{
		조건4이 참일 때 실행문;
	}
			:
			:
	else
	{
		조건이 모두 거짓일 때 실행문;
	}
	알고리즘:
	-면허종류와 필기시험 점수를 입력받아서,
	1종이면서 필기시험 점수가 70점 이상이면, "1종 면허 합격"출력
	1종이면서 필기시험 점수가 70점 미만이면, "1종 면허 불합격"출력
	2종이면서 필기시험 점수가 60점 이상이면, "2종 면허 합격"출력
	2종이면서 필기시험 점수가 60점 미만이면, "2종 면허 불합력"출력

	*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int type = 0, point = 0;

	printf("면허종류 번호를 선택: 1(1종면허), 2(2종면허);");
	scanf("%d", &type);

	printf("필기시험 점수 입력:");
	scanf("%d", &point);

	if (type == 1)
	{
		if (point >= 70)
		{
			printf("1종면허 합격\n");
		}
		else
		{
			printf("1종면허 합격\n");
		}
	}
	else if (type == 2)
	{
		if (point >= 60)
		{
			printf("2종면허 합격\n");
		}
		else
		{
		printf("2종면허 불합격\n");
		}
	}
	
	return 0;

}