/*file:dowhilenumber.c
  do while 반복문장
  
  do
  {	반복문을 한번은 수행 후,
	조건이 참일 때 실행하는 반복문;
   } (조건문);
   
   알고리즘:
	1부터 5까지 1씩 증가되는 값을 출력하는 프로그램

*/

#include <stdio.h>
#define MIN 1	//반복 횟수를 매크로 상수로 정의
#define MAX 5	//반복 횟수를 매크로 상수로 정의

int main(void)
{
	int n = MIN;

	do
	{
		printf("%d\n", n++);
	} while (n <= MAX);
	
	printf("\n제어변수 n=> %d\n", n);

	return 0;
}

