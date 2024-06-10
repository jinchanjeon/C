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
	printf("\n do~while이용 %d부터 %d까지 정수 출력 \n", MIN, MAX);
	do
	{
		printf("%d\n", n++);
	} while (n <= MAX);

	printf("\n제어변수 n=> %d\n", n);

	printf("\n while 이용 %d부터 %d까지 정수 출력\n", MIN, MAX);
	n = MIN;
	while (n <= MAX)	//반복 몸체는 반드시 블록으로 할 것
	{
		printf("%d\n", n++);
	};

	printf("\n제어변수 n=>%d\n", n);

	return 0;
}