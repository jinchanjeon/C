/*file:whilenumber.c
  while 반복문장
  
  while (조건문)
  {
	조건이 참일 때 실행하는 반복문:
   };

   알고리즘:
	int n=1;
	//정수값을 1씩 증가시키면서 출력 반복
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);
   반복문을 이용하여 5번 출력하는 프로그램, 반복의 횟수 MAX 매크로 상수로 정의
  */

#include <stdio.h>

#define MIN 8  //반복 횟수를 매크로 상수로 정의
#define MAX 19 //반복 횟수를 매크로 상수로 정의

int main(void)
{
	int n = MIN;

	while (n <= MAX) //반복 몸체는 반드시 블록으로 할것 
	{
		printf("%d\n", n++);
	}

	printf("\n제어변수 n => %d\n", n);

	return 0;
}