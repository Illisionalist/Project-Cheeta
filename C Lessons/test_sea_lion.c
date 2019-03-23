#include <stdio.h>

char x[9] = {'b','e','s','i','k','t','a','s'};
int a, b;

void swap(x[a], x[b]);
{
	char yedek;
	yedek = x[a];
	x[a] = x[b];
	x[b] = yedek;
}

void main()
{
	scanf("%d%d",&a,&b);
	printf("%s",x);
	swap(x[a], x[b]);
	printf("%s",x);
}
