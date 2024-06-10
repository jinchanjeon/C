//실습예제13-2 file:restedstruct.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//날짜를 위한 구조체
struct date
{
	int year;		//년
	int month;		//월
	int day;		//일

};
//은행계좌를 위한 구조체
struct account
{
	struct date open;	//계좌 개절일자
	char name[20];		//계좌주 이름
	int actnum;			//계좌번호
	double balance;		//잔고

};

int main(void)
{
	struct account me = { {2018,3,9},"홍길동",1001,300000 };
	struct account yours;

	printf("구조체크기: %d\n", sizeof(me));
	printf("[%d,%d,%d]\n", me.open.year, me.open.month, me.open.day);
	printf("%s%d%.2lf\n", me.name, me.actnum, me.balance);

	yours.open.year = 2020;
	yours.open.month = 12;
	yours.open.day = 8;
	strcpy(yours.name, "전진찬");
	yours.actnum = 1960901;
	yours.balance = 1000000;
	printf("[%d,%d,%d]\n", yours.open.year, yours.open.month, yours.open.day);
	printf("%s%d%.2lf\n", yours.name, yours.actnum, yours.balance);

	return 0;
}