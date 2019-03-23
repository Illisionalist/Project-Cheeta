#include <stdio.h>

void main()
{
	int delay, checker, divisor, controller, primeNumbers;
	float quotient;
	
	
	printf("\n\n\n\n\n\n\n\n\n					Arda Software Development Systems\n					Developing a Better Future");
	while(delay<999999999)
	{
		delay++;
	}
	
	system("cls");
	printf("Arda Software Development Systems\nDeveloping a Better Future\nVersion 1.0\n\n");
	
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
}
