/*�ǽ����� 9-7 file:array.c

[������ �迭�� ������(�迭���� �������̴�.)]
-�迭 score���� �迭�� score ��ü�� �迭 ù������ �ּҰ��� �����ϰ� �ִ� �������̹Ƿ� score�� &score[0]�� ����
-�迭�̸� score�� �̿��Ͽ� ��� �迭������ �ּҿ� ���尪�� ���� ����: ���������ڸ� �̿��� *score�� score[0]�� ����
-�ּҰ� (score+1)�� ���: score�ּҰ��� int���� ũ���� 4�� ���� �ּҰ�
-�����(score+i): score���� i��° ������ �ּҰ��� �˾Ƴ��� �����
-���������� *�� ����� ����� *(score+i): �迭 score�� (i+1)��° �迭���ҷ� score[i]

[�˰���]
1. �迭�̸��� ����� ���Ұ��� �ּҰ��� ����
2. �ּҰ�: &score[i]== score+i
3. ������:score[i]== *(score+i)
*/

#include <stdio.h>
#define SIZE 3

int main(void)
{
	int score[] = { 89,98,76 };

	//�迭�̸� score�� ù ��° ������ �ּ�
	printf("score: %p, &score[0]: %p\n", score, &score[0]);

	//�迭�̸� score�� ù ��° ��
	printf("*score: %d, score[0]:%d\n\n", *score, score[0]);

	printf("÷��   �ּ�     ���尪\n");
	//�迭�̸� score�� ����� �ּҿ� ���� �� ����
	for (int i = 0; i < SIZE; i++)
	{
		printf("%2d %10p %6d\n", i, (score + i), *(score + i));
	}

	return 0;
}