/*�ǽ�����10-3 file:arrayparam,c

[�˰���]
1. �Լ����� �迭������ ���
2. �迭�� ����Ű�� ����Ʈ ������ ���ڷ� ����
3. �Լ����ǿ��� ����������(++,--) �̿��Ͽ� ����

*/

#include <stdio.h>

int f_summary(int* ary, int SIZE);	//�迭�� ����Ű�� ����Ʈ ������ ���ڷ� ����
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
		//sum+=*(point++);	//�����߻�:�迭���� ����̹Ƿ� ���������� ��� ����
		sum += *(address++);	//���� ���� ���
	}
	printf("���ο��� ���� ���� %d\n", sum);

	address = point;
	printf("�Լ�summary():�迭�� ȣ��� ���� ���� %d\n", f_summary(point, aryLength));	//�ι�° ���� ���

	printf("�Լ�summary():�迭 ù��° �ּҰ� ȣ��� ���� ���� %d\n", f_summary(&point[0], aryLength));	//�Ϲ����� ���

	printf("�Լ�summary(): ������ ȣ��� ���� ���� %d\n", f_summary(address, aryLength));	//���� ���� ���

	getchar();

	return 0;
}

//int f_summary(int ary[],int SIZE)�� ����
int f_summary(int* ary, int SIZE)
{
	int sum = 0;

	for (int i = 0; i < SIZE; i++)
	{
		//sum+=ary[i];	//����
		//sum+=*(ary+i);	//����
		//sum+=*ary++;	//����
		sum += *(ary++);	//���� ���� ���

	}

	return sum;
}