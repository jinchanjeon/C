//�ǽ�����13-2 file:restedstruct.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//��¥�� ���� ����ü
struct date
{
	int year;		//��
	int month;		//��
	int day;		//��

};
//������¸� ���� ����ü
struct account
{
	struct date open;	//���� ��������
	char name[20];		//������ �̸�
	int actnum;			//���¹�ȣ
	double balance;		//�ܰ�

};

int main(void)
{
	struct account me = { {2018,3,9},"ȫ�浿",1001,300000 };
	struct account yours;

	printf("����üũ��: %d\n", sizeof(me));
	printf("[%d,%d,%d]\n", me.open.year, me.open.month, me.open.day);
	printf("%s%d%.2lf\n", me.name, me.actnum, me.balance);

	yours.open.year = 2020;
	yours.open.month = 12;
	yours.open.day = 8;
	strcpy(yours.name, "������");
	yours.actnum = 1960901;
	yours.balance = 1000000;
	printf("[%d,%d,%d]\n", yours.open.year, yours.open.month, yours.open.day);
	printf("%s%d%.2lf\n", yours.name, yours.actnum, yours.balance);

	return 0;
}