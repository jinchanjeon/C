/*file:variousop.c

	[간접연산자와 증감 연산자 활용]
		1. 간접연산자 *는 증감연산자 ++, --와 함께 많이 사용함
		2. 간접연산자 *는 전위연산자로 우선순위가 2위
		3. 증감연산자 ++,--는 전위이면 2위, 후위이면 1위

[알고리즘]
		1. *p++:++후위는 우선순위 1위, *(p++)이므로 결과는 p의 간접참조 값
		2. *++p:++ 전위는 우선순위 2위, *(++p)이므로 결과는 (p+1)의 간접참조 값
		3. (*p)++:p의 간접참조값
		4. ++*p:++ 전위는 우선순위 2위, ++(*p)이므로 결과는 p의 간접참조값에 1증가
		
*/

#include <stdio.h>

int main(void)
{
	int i = 0;
	int* pi = &i;	//포인터 선언
	int** dpi = &pi;	//이중포인터 선언

	*pi = 5;	//i=5;와 같은
	*pi += 1;	//*pi=*pi+1와 i=i+1은 같음
	printf("%d\n", i);	//출력결과는 6

	//후위 연산자 pi++는 전위 연산자보다 *pi보다 빠름
	printf("%d\n", (*pi)++);	//*pi++는 *(pi++)으로 (*pi)++과 다름. 출력결과는 6
	printf("%d\n", *pi);	//출력결과는 7

	*pi = 10;
	printf("%d\n", ++*pi);	//++*pi는 ++(*pi)는 같음. 출력결과는 11
	printf("%d\n", ++**dpi);	//++**dpi과 ++(**dpi)는 같음. 출력결과는 12
	printf("%d\n", i);	//출력결과는 12

	*pi = 20;
	printf("%d\n", -- * pi);	//--*pi는 --(*pi)는 같음. 출력결과는 19
	printf("%d\n", --**dpi);	//--**dpi과 --(**dpi)는 같음. 출력결과는 18
	printf("%d\n", i);	//출력결과는 18

	return 0;

}