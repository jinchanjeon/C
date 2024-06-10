/*file:triangle.c

내부반복이 외부반복에 의존

알고리즘:
      1
     21
    321
   4321
  54321
 출력하기
 */

#include <stdio.h>
#define MIN 1
#define MAX 5

int main(void)
{
    int i = 0, j = 0;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= 1; j--)
        {
            if (j > i)
            {
                printf("%c",' ');
            }
            else
            {
                printf("%d", j);
            }
        }
        puts("");
    }
    return 0;
}