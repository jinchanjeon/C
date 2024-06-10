/* file:dowhile.c
   do while 반복문장
   
   do
   { 반복문을 한번은 수행 후,
	 조건이 참일 때 실행하는 반복문;
	} (조건문);
	
	알고리즘:
		입력으로 받은 정수가 양수 또는 음수이면 계속 입력을 반복하고,
		입력한 수가 0이면 프로그램이 종료되는 프로그램
	*/

#define _CRT_SECURE_NO_WARNINGS //scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	int input = 0;

	do
	{
		printf("잠수 또는 0(종류)을 입력:");
		scanf("%d", &input);
	} while (input != 0);

	puts("종료합니다.");

	return 0;
}