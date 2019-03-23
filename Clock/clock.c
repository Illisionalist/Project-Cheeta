#include <stdio.h>
#include <conio.h>
 #include <dos.h>
 #include<stdlib.h>

void main ()
{
	int hour, munite, second, milisecond;
	hour = 0;
	munite = 0;
	second = 0;
	milisecond = 0;
	
	while (1)
	{
		milisecond = milisecond + 1;
		if (hour > 23)
			hour = 0;
		
		if (munite > 59)
		{
			hour = hour + 1;
			munite = 0;
		}
		if(second > 59)
		{
			munite = munite + 1;
			second=0;
		}
		if(milisecond > 9)
		{
			second = second+1;
			milisecond = 0;
		}
		system("cls");
		printf("%d.%d.%d.%d",hour,munite,second,milisecond);
	}
}
