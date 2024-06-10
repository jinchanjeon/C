/*	file:whilebasic.s
	while 반복문장
	
	while (조건문)
	{
		조건이 참일 때 실행하는 반복문;
	};
	
	알고리즘:
		printf("C언어 재미있네요! \n);
		printf("C언어 재미있네요! \n);
		printf("C언어 재미있네요! \n);
	반복문을 이용하여 3번 출력하는 프로그램

*/

#include <stdio.h>

int main(void)
{
	int count = 1;

	while (count <= 3)
	{
		printf("C언어 재미있네요!\n");
		count++;
	}
	printf("\n제어변수 count => %d\n", count);

	return 0;
}