#include <stdio.h>

#define TRUE 1

#define FALSE 0

int multiplaction(int x,int y)
{
	return x*y;
}

void main()
{
	
	int a, b;
	scanf("%d%d", &a, &b);
	printf("The result is %d", a*b);
}
