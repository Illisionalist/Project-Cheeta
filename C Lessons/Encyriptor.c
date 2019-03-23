#include <stdio.h>

void swap(char a, char b)
{
	char yedek;
	yedek = a;
	a = b;
	b = yedek;
	printf("in func || %c\n",a,b);
	return 0;
}

void main()
{
	char a[9]= {'b','e','s','i','k','t','a','s'};
	printf("%s\n",a);
	swap(a[2], a[5]);
/*	char yedek;
	yedek = x[2];
	x[2] = x[5];
	x[5] = yedek;*/
	printf("%s",a);
}


/*void main()
{
	char a = 'b';
	char b = 'z';
	printf("%c\t%c\n",a,b);
	
	char yedek;
	yedek = a;
	a = b;
	b = yedek;
	swap(a,b);
	
	printf("%c\t%c\n",a,b);
}*/
