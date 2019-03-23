#include <stdio.h>

void main()
{
	int firstNumber, secondNumber, firstController;
	float thirdNumber;
	printf("Made by Arda Bakici\nAll rights reserved©.\nVersion 1.1\n\n");
	printf("Please enter the number you want to check.\n");
	scanf("%d",&firstNumber);
	if (firstNumber > 2)
	{
		secondNumber = 2;
		thirdNumber =(float)firstNumber / secondNumber;
		firstController = thirdNumber;
		while(thirdNumber != firstController)
		{
			secondNumber = secondNumber + 1;
			thirdNumber =(float)firstNumber / secondNumber;
			firstController = thirdNumber;
			if (secondNumber == firstNumber)
			{
				break;
			}
		}
		if (secondNumber == firstNumber)
		{
			printf("\nYou entered a prime number.");
		}
		else
		{
			printf("\nYou entered an integer.\nIt can be divided by %d",secondNumber);
		}
	}
	else
	{
		if(firstNumber != 2)
		{
			printf("\nYou entered an integer.");
		}
		else
		{
			printf("\nYou entered a prime number.");
		}
	}
	printf("\n\n");
	system("pause");
}
