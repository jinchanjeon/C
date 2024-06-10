/*file: dereference.c

	[간접연산자 *]
	 포인터 변수가 가리키고 있는 변수의 값을 가지고 오려면 간접연산자 * 사용

[알고리즘]
	포인터 변수와 간접연산자 *를 이용한 간접참조

*/

#include <stdio.h>

int main(void)
{
	int data = 100;
	int* ptrint = &data;

	char ch = 'A';
	char* ptrchar = &ch;

	printf("간접참조 출력: %d %c\n", *ptrint, *ptrchar);

	*ptrint = 200;	//변수 data를 *ptrint로 간접참조하여 그 내용을 수정 data=200
	*ptrchar = 'B';	//변수 ch를 *ptrchar로 간접참조하여 그 내용을 수정 ch='B'
	printf("직접참조 출력:%d %c\n", data, ch);

	return 0;
}