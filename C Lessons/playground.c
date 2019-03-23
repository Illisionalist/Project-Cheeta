#include <stdio.h>

int yes_no(char x)
{
	if (x == 'y')
	{
		return 1;
	}
	else if(x == 'Y')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void main()
{
	char yesNo = getchar();
	printf("%c\n",yesNo);
	printf("%d", yes_no(yesNo));
	
}
