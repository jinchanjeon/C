/*실습예제 9-7 file:array.c

[일차원 배열과 포인터(배열명은 포인터이다.)]
-배열 score에서 배열명 score 자체가 배열 첫원소의 주소값을 저장하고 있는 포인터이므로 score와 &score[0]는 같음
-배열이름 score를 이용하여 모든 배열원소의 주소와 저장값을 참조 가능: 간접연산자를 이용한 *score와 score[0]는 같음
-주소값 (score+1)을 출력: score주소값에 int형의 크기인 4를 더한 주소값
-연산식(score+i): score다음 i번째 원소의 주소값을 알아내는 연산식
-간접연산자 *를 사용한 연산식 *(score+i): 배열 score의 (i+1)번째 배열원소로 score[i]

[알고리즘]
1. 배열이름을 사용한 원소값과 주소값의 참조
2. 주소값: &score[i]== score+i
3. 참조값:score[i]== *(score+i)
*/

#include <stdio.h>
#define SIZE 3

int main(void)
{
	int score[] = { 89,98,76 };

	//배열이름 score는 첫 번째 원소의 주소
	printf("score: %p, &score[0]: %p\n", score, &score[0]);

	//배열이름 score는 첫 번째 값
	printf("*score: %d, score[0]:%d\n\n", *score, score[0]);

	printf("첨자   주소     저장값\n");
	//배열이름 score를 사용한 주소와 원소 값 참조
	for (int i = 0; i < SIZE; i++)
	{
		printf("%2d %10p %6d\n", i, (score + i), *(score + i));
	}

	return 0;
}