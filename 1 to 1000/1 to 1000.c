#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a,b;
	
	a,b = 0;
	
	while(a<999999)
	{
		a++;
		printf("%d + ",a);
		b=b+a;
	}
	a++;
	b=b+a;
	printf("%d = %d\n",a,b);
	system("pause");
}
