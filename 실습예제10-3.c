/*실습예제10-3 file:arrayparam,c

[알고리즘]
1. 함수에서 배열인자의 사용
2. 배열을 가리키는 포인트 변수를 인자로 전달
3. 함수정의에서 증감연산자(++,--) 이용하여 연산

*/

#include <stdio.h>

int f_summary(int* ary, int SIZE);	//배열을 가리키는 포인트 변수를 인자로 전달
//int summaryf(int ary[], int SIZE);

int main(void)
{
	int point[] = { 95,88,76,54,85,33,65,78,99,82 };
	int* address = point;
	int aryLength = sizeof(point) / sizeof(point[0]);
	int sum = 0;

	for (int i = 0; i < aryLength; i++)
	{
		//sum+=*(point+i);
		//sum+=*(point++);	//오류발생:배열명은 상수이므로 증감연산자 사용 못함
		sum += *(address++);	//가장 좋은 방법
	}
	printf("메인에서 구한 합은 %d\n", sum);

	address = point;
	printf("함수summary():배열명 호출로 구한 합은 %d\n", f_summary(point, aryLength));	//두번째 빠른 방법

	printf("함수summary():배열 첫번째 주소값 호출로 구한 합은 %d\n", f_summary(&point[0], aryLength));	//일반적인 방법

	printf("함수summary(): 포인터 호출로 구한 합은 %d\n", f_summary(address, aryLength));	//제일 빠른 방법

	getchar();

	return 0;
}

//int f_summary(int ary[],int SIZE)도 가능
int f_summary(int* ary, int SIZE)
{
	int sum = 0;

	for (int i = 0; i < SIZE; i++)
	{
		//sum+=ary[i];	//가능
		//sum+=*(ary+i);	//가능
		//sum+=*ary++;	//가능
		sum += *(ary++);	//가장 좋은 방법

	}

	return sum;
}