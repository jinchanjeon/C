/*file:ifelse.c
조건이 3개 이상인 경우

	if(조건문1)
	{
		조건1이 참일 때 실행문;
	}
	else if(조건문2)
	{
		조건2이 참일 때 실행문;
	}
	else if(조건문3)
	{
		조건3이 참일 때 실행문;
	}
		:
				:
	else
	{
		조건이 모두 거짓일 때 실행문;
	}

	알고리즘:
	-입력받은 평점평균이
	평점평균 4.3이상이면, "성적이 최고 우수한 학생입니다" 출력
	평점평균 3.8이상이면, "성적이 매우 우수한 학생입니다" 출력
	평점평균 3.0이상이면, "성적이 우수한 학생입니다"출력
	평점평균 3.0미만이면, "성적이 3.0미만인 학생입니다"출력
	*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double gpa = 0.0;

	printf("평점평균 입력:");
	scanf("%lf", &gpa);

	if (gpa >= 4.3)
	{
		printf("평균평점:%.2lf는 성적이 최고 우수한 학생입니다.\n", gpa);
	}
	else if (gpa >= 3.8)
	{
		printf("평균평점:%.2lf는 성적이 매우 우수한 학생입니다.\n", gpa);
	}
	else if (gpa >= 3.0)
	{
		printf("평균평점: %.2lf는 성적이 우수한 학생입니다.\n", gpa);
	}
	else
	{
		printf("평균평점: %.2lf는 성적이 3.0미만인 학생입니다.\n", gpa);
	}
	
	return 0;
}