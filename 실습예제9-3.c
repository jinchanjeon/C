/* 실습ㅇ예제 9-3 file:twodarray.c
	
	[이차원 배열 선언과 사용]
		이차원 배열선언-> 원소자료형 배열이름 [배열행크기] [배열열크기]={초기값};
	[알고리즘]
		1.이차원 배열 지정과 출력
		2. 외부반복(첫번째 반복문)--> 제어변수 i는 행을 0에서 (행의 수-1)까지 순차적으로 참조
		3. 내부반복(두번째 반복문)--> 제어변수 j는 0에서 (열의 수-1)까지 열
*/

#include <stdio.h>

#define ROWSIZE 2	//행 개수
#define COLSIZE 3	//열 개수

int main(void)
{
	//2차원 배열선언 후 전체 0으로 초기화
	int td[ROWSIZE][COLSIZE] = { 0 };

	//2차원 배열선언 후 원소값 저장
	//int td[ROWSIZE][COLSIZE]={{1,2,3},{4,5,6}};

	//2차원 배열원소에 값 저장
	td[0][0] = 1; td[0][1] = 2; td[0][2] = 3;
	td[1][0] = 4; td[1][1] = 5; td[1][2] = 6;

	printf("반복문 for를 이용하여 출력\n");
	for (int i = 0; i < ROWSIZE; i++)	//행이 개수만큼 반복
	{
		for (int j = 0; j < ROWSIZE; j++)	//열이 개수만큼 반복
		{
			printf("td[%d][%d]==%.2d", i, j, td[i][j]);
		}
		printf("\n");
	}

	return 0;
}