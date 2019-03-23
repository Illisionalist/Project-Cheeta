#include <stdio.h>
void swap(int a,int b)
{
	int yedek;
	yedek = a;
	a = b;
	b = yedek;
	printf("in func|| a : %d  b : %d\n",a,b);
}

void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("a : %d  b : %d\n",a,b);
	swap(a, b);
	printf("a : %d  b : %d",a,b);
}
