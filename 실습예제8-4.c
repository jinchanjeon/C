/*file: dereference.c

	[���������� *]
	 ������ ������ ����Ű�� �ִ� ������ ���� ������ ������ ���������� * ���

[�˰���]
	������ ������ ���������� *�� �̿��� ��������

*/

#include <stdio.h>

int main(void)
{
	int data = 100;
	int* ptrint = &data;

	char ch = 'A';
	char* ptrchar = &ch;

	printf("�������� ���: %d %c\n", *ptrint, *ptrchar);

	*ptrint = 200;	//���� data�� *ptrint�� ���������Ͽ� �� ������ ���� data=200
	*ptrchar = 'B';	//���� ch�� *ptrchar�� ���������Ͽ� �� ������ ���� ch='B'
	printf("�������� ���:%d %c\n", data, ch);

	return 0;
}