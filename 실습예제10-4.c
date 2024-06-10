/*실습예제 10-4 file:twodarrayfunction.c
[알고리즘]
1. 함수에서 2차 배열인자의 사용
2. 2차 배열을 가리키는 포인트 배열을 인자로 전달

*/

#include <stdio.h>

//2차원 배열값을 모두 더하는 함수원형
double f_sum(double(*daya)[3], int rowsize, int colsize);
//double f_sum(double data[][3],int rowsize,int colsize)

//2차원 배열값을 모두 출력하는 함수원형
void f_printarray(double(*data)[3], int rowsize, int colsize);
//vold f_printarray(double data[][3],int rowsize int colsize)

int main(void)
{
	//4x3 행렬을 위한 이차원 배열 선언 및 초기화
	double x[][3] = { {1,2,3},{7,8,9},{4,5,6},{10,11,12} };
	double(*px)[3] = x;
	double sum = 0.0;

	int rowsize = sizeof(x) / sizeof(x[0]);
	int colsize = sizeof(x[0]) / sizeof(x[0][0]);

	printf("2차원 배열의 자료값은 다음과 같습니다.\n");
	//f_printarray(x,rowsize,colsize);
	f_printarray(px, rowsize, colsize);

	sum = f_sum(x, rowsize, colsize);
	printf("2차원 배열 원소합은 %.2lf입니다.\n", sum);

	getchar();
	return 0;
}

//배열값을 모두 더하는 함수
double f_sum(double(*data)[3], int rowsize, int colsize)
//double f_sum(double data[][3], int rowsize, int colsize)
//double f_sum(double data[][3],int rowsize, int colsize)
{
	double total = 0;

	for (int i = 0; i < rowsize; i++)
	{
		for (int j = 0; j < colsize; j++)
		{
			//total+=data[i][j];
			total += *(*(data + i) + j); //가장 좋은 방법
		}
	}
	return total;
}

//배열값을 모두 출력하는 함수
void f_printarray(double(*data)[3], int rowsize, int colsize)
//void f_printarray(double data[][3], int rowsize, int colzise)
{
	for (int i = 0;i < rowsize; i++)
	{
		printf("%d행원소:", i + 1);
		for (int j = 0; j < colsize; j++)
		{
			//printf("x[%d][%d]=%5.2lf",i,j,data[i][j]);
			printf("x[%d][%d]=%5.2lf", i, j, *(*(data + i) + j));	//가장 좋은 방법
		}
		printf("\n");
	}
	printf("\n");
}