/*file:address.c

[�ּҿ�����:&]
& ������ --> ������ �����ּҰ� ����

[�˰���]
	1. ���������ϰ�, scanf() �Լ� ����Ͽ� 
	2. �Է¹��� �� ���
	3. ������ �ּҰ��� 10����(%u),16����(%p)�� ���
	4. �ּҰ��� ũ�� ���
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input = 0;

	printf("�����Է�:");
	scanf("%d", &input);

	printf("�Է°�: %d\n", input);

	printf("�ּҰ�: %u(10����), %p(16����)\n", (int)&input, &input);
	printf("�ּҰ�:%d(10����),%#x(16����)\n", (unsigned)&input, (int)&input);

	printf("�ּ� �� ũ��:%d\n", sizeof(&input));

	return 0;
}