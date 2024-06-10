// file: increment.c

#include <stdio.h>

int main(void)
{
	int m = 10, n = 5;
	int result = 0;

	result = m++ + --n;	// m++는 10, --n은 4이므로 10 + 4는 14, 이후 m은 11, n은 4
	printf("m=%d n=%d result=%d\n", m, m, result);

	result = ++m - n--;	//++m는 12, n--은 4이므로 12-4는 8, 이후 m은 12, n은 3
	printf("m=%d n=%d result=%d\n", m, n, result);

	return 0;
}