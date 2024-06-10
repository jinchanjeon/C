/*�ǽ����� 10-4 file:twodarrayfunction.c
[�˰���]
1. �Լ����� 2�� �迭������ ���
2. 2�� �迭�� ����Ű�� ����Ʈ �迭�� ���ڷ� ����

*/

#include <stdio.h>

//2���� �迭���� ��� ���ϴ� �Լ�����
double f_sum(double(*daya)[3], int rowsize, int colsize);
//double f_sum(double data[][3],int rowsize,int colsize)

//2���� �迭���� ��� ����ϴ� �Լ�����
void f_printarray(double(*data)[3], int rowsize, int colsize);
//vold f_printarray(double data[][3],int rowsize int colsize)

int main(void)
{
	//4x3 ����� ���� ������ �迭 ���� �� �ʱ�ȭ
	double x[][3] = { {1,2,3},{7,8,9},{4,5,6},{10,11,12} };
	double(*px)[3] = x;
	double sum = 0.0;

	int rowsize = sizeof(x) / sizeof(x[0]);
	int colsize = sizeof(x[0]) / sizeof(x[0][0]);

	printf("2���� �迭�� �ڷᰪ�� ������ �����ϴ�.\n");
	//f_printarray(x,rowsize,colsize);
	f_printarray(px, rowsize, colsize);

	sum = f_sum(x, rowsize, colsize);
	printf("2���� �迭 �������� %.2lf�Դϴ�.\n", sum);

	getchar();
	return 0;
}

//�迭���� ��� ���ϴ� �Լ�
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
			total += *(*(data + i) + j); //���� ���� ���
		}
	}
	return total;
}

//�迭���� ��� ����ϴ� �Լ�
void f_printarray(double(*data)[3], int rowsize, int colsize)
//void f_printarray(double data[][3], int rowsize, int colzise)
{
	for (int i = 0;i < rowsize; i++)
	{
		printf("%d�����:", i + 1);
		for (int j = 0; j < colsize; j++)
		{
			//printf("x[%d][%d]=%5.2lf",i,j,data[i][j]);
			printf("x[%d][%d]=%5.2lf", i, j, *(*(data + i) + j));	//���� ���� ���
		}
		printf("\n");
	}
	printf("\n");
}