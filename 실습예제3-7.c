/*
	솔루션 / 프로젝트 / 소스파일: Ch03 / Prj07 / char.c
	문자형 변수의 선언과 이용ㅇ
	V 1.0 2016.
*/

#include <stdio.h>

int main(void)
{
	char c1 = 'a';  //소문자 a  
	char c1_1 = 97;	//소문자 a
	char c2 = 65;   //대문자 A가 코드값 65	char c2 = 'A'
	char c2_1 = 'A';
	char c3 = '\132'; //대문자 Z의 8진수 코드값 132	char c3 = 'Z'
	char c3_1 = 'Z';
	char c4 = '\x5A'; //대문자 Z의 16진수 코드값 5A	char c4 = 'Z'
	char c4_1 = 'Z';

	printf("저장 값(문자): %c %c %c %c\n", c1, c2, c3, c4);
	printf("저장 값(문자): %c %c %c %c\n", c1_1, c2_1, c3_1, c4_1);
	printf("저장 값(정수): %d %d %d %d\n", c1, c2, c3, c4);

	return 0;
}