/*	file:whilebasic.s
	while �ݺ�����
	
	while (���ǹ�)
	{
		������ ���� �� �����ϴ� �ݺ���;
	};
	
	�˰���:
		printf("C��� ����ֳ׿�! \n);
		printf("C��� ����ֳ׿�! \n);
		printf("C��� ����ֳ׿�! \n);
	�ݺ����� �̿��Ͽ� 3�� ����ϴ� ���α׷�

*/

#include <stdio.h>

int main(void)
{
	int count = 1;

	while (count <= 3)
	{
		printf("C��� ����ֳ׿�!\n");
		count++;
	}
	printf("\n����� count => %d\n", count);

	return 0;
}