/*file:dowhilenumber.c
  do while �ݺ�����
  
  do
  {	�ݺ����� �ѹ��� ���� ��,
	������ ���� �� �����ϴ� �ݺ���;
   } (���ǹ�);
   
   �˰���:
	1���� 5���� 1�� �����Ǵ� ���� ����ϴ� ���α׷�

*/

#include <stdio.h>
#define MIN 1	//�ݺ� Ƚ���� ��ũ�� ����� ����
#define MAX 5	//�ݺ� Ƚ���� ��ũ�� ����� ����

int main(void)
{
	int n = MIN;

	do
	{
		printf("%d\n", n++);
	} while (n <= MAX);
	
	printf("\n����� n=> %d\n", n);

	return 0;
}

