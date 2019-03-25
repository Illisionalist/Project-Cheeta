#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void main()
{
	//determinate the variables
	int prediction, firstController, firstNumber, firstLoop, secondLoop, range, amount, yesNo,delay;
	char difficulty[10], condition[10], secondController, difficultyChange;
	//for randomness
	srand((unsigned)time(NULL));
	
	amount = 0;
	delay = 0;
	firstLoop = 0;
	
	printf("\n\n\n\n\n\n\n\n\n					Arda Software Development Systems\n					Developing a Better Future");
	while(delay<999999999)
	{
		delay++;
	}
	while (firstLoop < 1)
	{
		while(firstLoop < 1)
		{
			yesNo = 0;
			system("cls");
			printf("Arda Software Development Systems\nDeveloping a Better Future\nVersion 1.0\n\n");
			printf("Please write the difficulty mode you want to play. Easy, Hard, Expert or Custom :\t");
			gets( difficulty);
			strcpy(condition, "easy");
		    firstController = strcmpi(difficulty, condition);
		    if(firstController == 0)
		    {
				yesNo = 1;
				range = 10;
		    }
		    else
		    {
			    strcpy(condition, "hard");
		    	firstController = strcmpi(difficulty, condition);
		    	if(firstController == 0)
		    	{
		    		yesNo = 1;
		    		range = 100;
				}
				else
				{
					strcpy(condition, "expert");
		    		firstController = strcmpi(difficulty, condition);
		    		if(firstController == 0)
		    		{
		    			yesNo = 1;
		    			range = 1000;
					}
					else
					{
						strcpy(condition, "custom");
		    			firstController = strcmpi(difficulty, condition);
		    			if(firstController == 0)
		    			{
		    				printf("You chose custom difficulty.\n");
		    				while(yesNo < 1)
		    				{
		    					printf("You will decide the range of numbers.\n 1 to ");
		    					scanf("%d",&range);
		    					if(range > 0 && range <= 1000000 )
		    					{
		    						yesNo = 1;
								}
								else
								{
									printf("\nPlease enter a number between 1 and 1.000.000\n");
								}
		    				}
						}
					}
				}
			}
			if(yesNo == 1)
			{
				printf("\nYou chose %s mode. Do you want to continue ? Y/N\t\t", condition);
		        scanf(" %c",&secondController);
		        if(secondController == 'Y')
		        {
		        	firstLoop = 1;
				}
				else
				{
					if(secondController == 'y')
					{
						firstLoop = 1;
					}
				}
			}
		}
		//game codes
		printf("\nThis game is a guess game. Computer will pick a number and you will guess it.\n");
		printf("You're playing in %s mode.\n",condition);
		printf("Computer will pick a number between 1 and %d and will tell your prediction is lower or higher and the actual number.\n", range);
		secondLoop = 0;
		firstNumber=rand() %range+1;
		while(secondLoop < 1)
		{
			printf("Please enter your prediction :\t");
			amount = amount + 1;
			scanf(" %d",&prediction);
			if(prediction == firstNumber)
			{
				printf("\nCongratulations, you won.\n");
				printf("You guess the number after %d times trying.\n",amount);
				printf("Do you want to play again ? Y/N\t");
				scanf(" %c",&secondController);
				if(secondController == 'Y')
		        {
		        	printf("Do you want to change difficulty ? Y/N\t");
		        	scanf(" %c",&difficultyChange);
		        	if(difficultyChange == 'Y')
		        	{
		        		firstLoop = 0;
		        		secondLoop = 1;
					}
					else
					{
						if(difficultyChange == 'y')
						{
							firstLoop = 0;
			        		secondLoop = 1;
						}
						else
						{
							firstNumber=rand() %range+1;
							system("cls");
							secondLoop=0;
							amount=0;
						}
					}
				}
				else
				{
					if(secondController == 'y')
					{
						printf("Do you want to change difficulty ? Y/N\t");
		        		scanf(" %c",&difficultyChange);
		        		if(difficultyChange == 'Y')
			        	{
			        		firstLoop = 0;
			        		secondLoop = 1;
						}
						else
						{
							if(difficultyChange == 'y')
							{
								firstLoop = 0;
			        			secondLoop = 1;
							}
							else
							{
								firstNumber=rand() %range+1;
								system("cls");
								secondLoop=0;
								amount=0;
							}
						}
					}
					else
					{
						secondLoop = 1;
					}
				}
			}
			else
			{
				if(prediction < firstNumber)
				{
					printf("HIGHER\n");
				}
				else
				{
					printf("LOWER\n");	
				}
			}
		}
	}
	printf("\nIt was fun playing with you.\n");
	system("pause");
}
