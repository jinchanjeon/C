/*file:seasonswitch.c
switch문에서 여러개의 상수값 나열:연산값이 문자 또는 정수일 때 사용

switch(연산식)
{
	case 상수1: case 상수2
	 연산식값이 상수1이거나 상수2이면 실행할 명령들...
	 break;
	case 상수3:
	 연산식값이 상수2이면 실행할 명령들...
	 break;
	case 상수4;
	 연산식값이 상수3이면 실행할 명령들...
	 break;
	 :
	 :
	default:
	  연산식값이 위의 상수값들과 일치하는 것이 없다면 실행할 명령들...
	  break;
}

	알고리즘:
	-1년중 해당월을 입력 받아서,
	4월~5월:"봄 입니다."
	6월~8월:"여름입니다."
	9월~11월: "가을입니다."
	12월,1월~3월:"겨울입니다."
	아니면:"잘못 입력 하셨습니다."
	*/

#define _CRT_SECURE_NO_WARNINGS //scanf()오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	int month = 0;

	printf("년도의 월(month)을 입력:");
	scanf("%d", &month);

	switch (month)
	{
	case 4:case 5:
		printf("%d월은 봄입니다.\n", month);
		break;

	case 6:case 7: case 8:
		printf("%d월은 여름입니다.\n", month);
		break;

	case 9:case 10: case 11:
		printf("%d월은 가을입니다.\n", month);
		break;

	case 12:case 1:case 2: case 3:
		printf("%d월은 겨울입니다.\n", month);
		break;

	default:
		printf("월(month)을 잘못 입력하셨습니다.\n");
		break;
	}

	return 0;
}