// basictype.c: �� ������ ��, �� �Ǽ��� �� ���

#include <stdio.h>

int main(void)
{
	int a = 30, b = 43;  //�� ���� ����� �߱Ⱚ ����
	int sum = 0;			 //�� ������ ���� ������ ���� ����
	sum = a + b;         //�� ������ �� ���ϱ�

	double x = 38.342, y = 45.345;	//�� �Ǽ� ����� �ʱⰪ ����
	double difference = 0;	        //�� �Ǽ��� ���� ���ھ� ���� ����
	difference = x - y;             //�� �Ǽ��� �� ���ϱ�

	printf("��: %d\n", sum);    	//�� ������ �� ���
	printf("��: %f\n", difference);	//�� �Ǽ��� �� ���

	return 0;

}