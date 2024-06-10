/*file:pointer.c
	[포인터변수 선언]
		주소값을 저장하는 변수를 포인터변수라고 함
		변수선언: 자료유형 *변수명= 초기값:
		
	[알고리즘]
		포인터 변수선언과 주소값 대입
*/

#include <stdio.h>

int main(void)
{
	int data = 100;
	int* ptrint = NULL;
	ptrint = &data;

	printf("변수명 주소값   저장값\n");
	printf("--------------------------------\n");
		
	printf("data %p %8d\n", &data, data);
	printf("ptrint %p %p\n", &ptrint, ptrint);

	return 0;
}