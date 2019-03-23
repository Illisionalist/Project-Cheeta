#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void main()
{
	//determinate the variables
	int prediction, option, firstController, firstNumber,thirdController, fourthController,delay;
	char difficulty[10], condition[10], secondController, yesNo, difficultyChange;
	//for randomness
	srand((unsigned)time(NULL));
	
	delay = 0;
	thirdController = 0;
	fourthController = 0;
	
	printf("\n\n\n\n\n\n\n\n\n					Arda Software Development Systems\n					Developing a Better Future");
	while(delay<999999999)
	{
		delay++;
	}
	while (thirdController < 1)
	{
		system("cls");
		printf("Arda Software Development Systems\nDeveloping a Better Future\nVersion 1.0\n\n");
		printf("Please write the difficulty mode you want to play. Easy, hard or expert :\t");
		gets(difficulty);
		strcpy(condition, "easy");
	    firstController = strcmpi(difficulty, condition);
	    if(firstController == 0)
	    {
	        printf("\nYou choosed easy mode. Do you want to continue ? Y/N\t\t");
	        scanf("%c",&secondController);
	        if(secondController == 'Y')
	        {
	        	option = 1;
	        	thirdController = thirdController + 1;
			}
			else
			{
				if(secondController == 'y')
				{
					option = 1;
					thirdController = thirdController + 1;
				}
			}
	    }
	    else
	    {
		    strcpy(condition, "hard");
	    	firstController = strcmpi(difficulty, condition);
	    	if(firstController == 0)
	    	{
	    		printf("\nYou choosed hard mode. Do you want to continue ? Y/N\t\t");
		        scanf("%c",&secondController);
		        if(secondController == 'Y')
		        {
		        	option = 2;
		        	thirdController = thirdController + 1;
				}
				else
				{
					if(secondController == 'y')
					{
						option = 2;
						thirdController = thirdController + 1;
					}
				}
			}
			else
			{
				strcpy(condition, "expert");
	    		firstController = strcmpi(difficulty, condition);
	    		if(firstController == 0)
	    		{
	    			printf("\nYou choosed expert mode. Do you want to continue ? Y/N\t\t");
			        scanf("%c",&secondController);
			        if(secondController == 'Y')
			        {
			        	option = 3;
			        	thirdController = thirdController + 1;
					}
					else
					{
						if(secondController == 'y')
						{
							option = 3;
							thirdController = thirdController + 1;
						}
					}
				}
			}
		}
		printf("\nThis game is a guess game. Computer will pick a number and you will try to guess it.\n");
		switch(option)
		{
			case 1:
				printf("You're playing in easy mode.\nComputer will pick a number between 1 and 10 and will tell your prediction is lower or higher.\n");
				firstNumber=rand() %10+1;
				//erase this
				printf("%d",firstNumber);
				while(fourthController < 1)
				{
					printf("Please enter your prediction :\t");
					scanf("%d",&prediction);
					if(prediction == firstNumber)
					{
						printf("Congratulations, you won.\n");
						printf("Do you want to play again ? Y/N\t");
						scanf(" %c",&yesNo);
						if(yesNo == 'Y')
				        {
				        	printf("Do you want to change difficulty ? Y/N\t");
				        	scanf(" %c",&difficultyChange);
				        	printf("outout 1");
				        	fourthController = 1;
						}
						else
						{
							if(yesNo == 'y')
							{
								printf("Do you want to change difficulty ? Y/N\t");
				        		scanf(" %c",&difficultyChange);
				        		printf("output 2");
				        		fourthController = 1;
							}
							else
							{
								printf("output 3");
								fourthController = 1;
							}
						}
					}
					else
					{
						printf("output 4");
						fourthController = 1;
					}
				}
		}
	}
	printf("\nIt was fun playing with you.");
	system("pause");
}
