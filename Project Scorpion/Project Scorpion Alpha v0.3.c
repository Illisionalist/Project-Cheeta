#include <stdio.h>

void main()
{
	//lets determinate the variables
	int firstNumber, secondNumber, result;
	char oper;
	
	printf("Made by Arda Bakici and Can Mermer\n Alpha v0.3\n\n");
	
	beginning:
	
	printf("Please enter the operation.\n");
	scanf("%d %c %d",&firstNumber,&oper,&secondNumber);
	printf("\n");
	if (oper == '+', '-', '*', '/')
	{
		switch (oper)
		{
			case '+' :
			{
				system("cls");
				result=firstNumber + secondNumber;
				printf("%d %c %d = %d",firstNumber, oper,secondNumber, result);
				break;
			}
			case '-' :
			{
				system("cls");
				result=firstNumber - secondNumber;
				printf("%d %c %d = %d",firstNumber, oper,secondNumber, result);
				break;
			}
			case '*' :
			{
				system("cls");
				result=firstNumber * secondNumber;
				printf("%d %c %d = %d",firstNumber, oper,secondNumber, result);
				break;
			}
			case '/' :
			{
				system("cls");
				float result;
				result =(float)firstNumber / secondNumber;
				printf("%d %c %d = %f",firstNumber, oper,secondNumber, result);
				break;
			}
		}
		
	}
	else
	{
		system("cls");
		printf("Please enter a valid operation.");
		goto beginning;
	
	}
}
