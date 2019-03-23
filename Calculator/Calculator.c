#include <stdio.h>

void main()
{
	//lets determinate the variables
    int firstNumber;
    int secondNumber;
    int result;
    int firstController;
    float quotient;
    
    begining:
    
    printf("For multiplication enter 1\nFor divison enter 2\nFor addition enter 3\nFor subtraction enter 4\n");
    scanf("%d",&firstController);
    
    if (firstController == 1)
    {
    	//this part is for multiplication
    	system("cls");
        printf("For multiplication enter the first number.\n");
        scanf("%d",&firstNumber);
        printf("Now enter the second number.\n");
       scanf("%d",&secondNumber);
        result = firstNumber * secondNumber;
        printf("%d * %d = %d",firstNumber,secondNumber,result);
    }
    else
    {
        if(firstController == 2)
        {
        	//this part is for divison
        	system("cls");
            printf("For divison enter the first number.\n");
        scanf("%d",&firstNumber);
        printf("Now enter the second number.\n");
       scanf("%d",&secondNumber);
        quotient =(float)firstNumber / secondNumber;
        printf("%d / %d = %f",firstNumber,secondNumber,quotient);
        }
        else
        {
            if(firstController == 3)
            {
            	//this part is for addition
            	system("cls");
               printf("For addition enter the first number.\n");
        scanf("%d",&firstNumber);
        printf("Now enter the second number.\n");
       scanf("%d",&secondNumber);
        result = firstNumber + secondNumber;
        printf("%d + %d = %d",firstNumber,secondNumber,result); 
            }
            else
            {
                if(firstController == 4)
                {
                	//this part is for subtraction
                	system("cls");
                    printf("For subtraction enter the first number.\n");
        scanf("%d",&firstNumber);
        printf("Now enter the second number.\n");
       scanf("%d",&secondNumber);
        result = firstNumber - secondNumber;
        printf("%d - %d = %d",firstNumber,secondNumber,result);
                }
                else
                {
                	//if someone enters wrong number the program will restart
                	system("cls");
                    printf("Please enter a valid number.\n\n");
                    goto begining;
                }
            }
        }
    }
    printf("\n\n");
    system("pause");
}
