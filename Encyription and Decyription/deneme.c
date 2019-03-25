#include <stdio.h>

void main()
{
	
	char* input= "3842"; //TODO: Input
	char thousands = input[0];
	char hudreds = input[1];
	char tens = input[2];
	char ones = input[3];
	int x = input[2] - 'a';
	printf("%c %c %c %d",input[0], input[1], input[2], x);
}
