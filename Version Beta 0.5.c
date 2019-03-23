#include <stdio.h>
#define TRUE 1
#define FALSE 0

char x[256];
int organizer_a;
int organizer_b;

void swap(int a, int b)
{
    char yedek;
    int a_copy, b_copy;
    a_copy = a;
    b_copy = b;
    //printf("\n(before exe)a : %d  b : %d  organizer_a : %d  organizer_b : %d",a,b,organizer_a,organizer_b);
    a -= organizer_a;
    b -= organizer_b;
    
    //printf("\nb - orginazer_b : %d",b);
	if(a > string_length(x))
	{
        organizer_a += string_length(x);
        a_copy -= organizer_a;
        a = a_copy;
    }
    if(b > string_length(x))
    {
        organizer_b += string_length(x);
        b_copy -= organizer_b;
        b = b_copy;
    }
    if(a > string_length(x))
    {
    	//a -= organizer_a;
    	printf("\n\na tried to escape\n\n");
	}
	if(b > string_length(x))
	{
	//	b -= organizer_b;
		printf("\n\nb tried to escape\n\n");
	}
	printf("\na is %d, b is %d",a,b);
    yedek = x[a];
    x[a] = x[b];
    x[b] = yedek;
    //printf("\n(after exe)a : %d  b : %d  organizer_a : %d  organizer_b : %d",a,b,organizer_a,organizer_b);
}

int string_length(char s[]) {
   int c = 0;
 
   while (s[c] != '\0')
      c++;
 
   return c-1;
}

/*int digit_founder(int a)
{
	static int digits[3];
	int hundreds, tens, ones, b, condition;
	b = 100;
	condution 1
	while(condition < 1)
	{
		hundreds = a/b;
		if(hundreds < 1)
		{
			printf("\n\nPlease enter a valid number.");
		}
	}
}*/

void main()
{
    int enc_1,enc_2,repeat,a,key;
    organizer_a = 0;
    organizer_b = 0;
    a = 1;
    
    printf("Developer Mode, Beta Version 0.5\n");
    //scanf ("%[^\n]%s", x);
    //important! gets will make this code unsecured, pls change it in future
    gets(x);
    
    printf("\n\n\nThis is the string that you entered : %s",x);
    printf("\n(in pc lang)The string's length is : %d\n",string_length(x));
    
    //scanf("%d",&key);
    scanf("%d%d%d",&enc_1, &enc_2, &repeat);
    
 //   printf("\n\n\nenc_1 : %d  enc_2 : %d",enc_1,enc_2);
    
    while((((enc_1*a) > (enc_2*a)) ? (enc_1*a) : (enc_2*a)) <= (string_length(x)*repeat))
    {
        swap(enc_1*a,enc_2*a);
    //    printf("\n(changed text)%s",x);
  	//	printf("\nstring's updated length : %d",string_length(x)*repeat);
        a++;
    }
    printf("\nresult :||%s||",x);
    printf("\nEncyription process took %d steps to finish.",a);
    system("pause");
}
