#include <stdio.h>

char x[256];
int organizer_a;
int organizer_b;

void swap(int a, int b)
{
    char yedek;
    int a_copy, b_copy;
    
    a -= organizer_a;
    b -= organizer_b;
   // printf("\na : %d  b : %d",a,b);
   // printf("\norganizer_a : %d  organizer_b : %d",organizer_a,organizer_b);
	if(a < 1)
	{
		printf("\n\nloop1 for a");
        organizer_a -= string_length(x);
        a += string_length(x);
    }
    if(b < 1)
    {
    	printf("\n\nloop1 for b");
        organizer_b -= string_length(x);
        b += string_length(x);
    }
//	printf("\n(changed chars)%c %c",x[a],x[b]);
	printf("\n(after loop)a : %d  b : %d",a,b);
    yedek = x[a];
    x[a] = x[b];
    x[b] = yedek;
}

int string_length(char s[])
{
   int c = 0;
 
   while (s[c] != '\0')
      c++;
 
   return c-1;
}

void main()
{
    int enc_1,enc_2,repeat,a,key;
    
    printf("Developer Mode, Beta Version 0.5\n");
    //important! gets will make this code unsecured, pls change it in future
    gets(x);
    
    printf("\n\n\nThis is the string that you entered : %s",x);
    printf("\n(in pc lang)The string's length is : %d\n",string_length(x));
    
    scanf("%d%d%d",&enc_1, &enc_2, &repeat);
    organizer_a = (string_length(x) * (repeat - 1));
    organizer_b = (string_length(x) * (repeat - 1));
    
    printf("\n\n\nenc_1 : %d  enc_2 : %d",enc_1,enc_2);
    
    a = ((string_length(x) * repeat) / ((enc_1 > enc_2) ? enc_1 : enc_2));
    
    printf("\n\na is %d",a);
    
    while(a > 0)
    {
        swap(enc_1*a,enc_2*a);
    //    printf("\n%d %d",enc_1*a,enc_2*a);
      //  printf("\n(changed text)%s",x);
  		printf("\nstring's updated length : %d",string_length(x)*repeat);
        a--;
    }
    printf("\nresult : %s",x);
    printf("\nDecyription process took %d steps to finish.",a);
    system("pause");
}
