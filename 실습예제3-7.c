/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch03 / Prj07 / char.c
	������ ������ ����� �̿뤷
	V 1.0 2016.
*/

#include <stdio.h>

int main(void)
{
	char c1 = 'a';  //�ҹ��� a  
	char c1_1 = 97;	//�ҹ��� a
	char c2 = 65;   //�빮�� A�� �ڵ尪 65	char c2 = 'A'
	char c2_1 = 'A';
	char c3 = '\132'; //�빮�� Z�� 8���� �ڵ尪 132	char c3 = 'Z'
	char c3_1 = 'Z';
	char c4 = '\x5A'; //�빮�� Z�� 16���� �ڵ尪 5A	char c4 = 'Z'
	char c4_1 = 'Z';

	printf("���� ��(����): %c %c %c %c\n", c1, c2, c3, c4);
	printf("���� ��(����): %c %c %c %c\n", c1_1, c2_1, c3_1, c4_1);
	printf("���� ��(����): %d %d %d %d\n", c1, c2, c3, c4);

	return 0;
}