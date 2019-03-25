#include <stdio.h>

char x[256];
int organizer_a;
int organizer_b;
int a_copy;
int b_copy;

void swap(int a, int b)
{
    char yedek;
    printf("\n(before exe)a : %d  b : %d  organizer_a : %d  organizer_b : %d",a,b,organizer_a,organizer_b);
    a -= organizer_a;
    b -= organizer_b;
    
    printf("\nb - orginazer_b : %d",b);

    if((a/string_length(x)) >= 1)
    {
    	a -= organizer_a;
        organizer_a += string_length(x);
    }
    if((b/string_length(x)) >= 1)
    {
    	b -= organizer_b;
        organizer_b += string_length(x);
    }
    if(a >= string_length(x))
    {
    	a -= organizer_a;
    	printf("\n\na tried to escape\n\n");
	}
	if(b >= string_length(x))
	{
		b -= organizer_b;
		printf("\n\nb tried to escape\n\n");
	}

    yedek = x[a];
    x[a] = x[b];
    x[b] = yedek;
    printf("\n(after exe)a : %d  b : %d  organizer_a : %d  organizer_b : %d",a,b,organizer_a,organizer_b);
}

int string_length(char s[]) {
   int c = 0;
 
   while (s[c] != '\0')
      c++;
 
   return c-1;
}

void main()
{
    int enc_1,enc_2,repeat,a;
    
    organizer_a = 0;
    organizer_b = 0;
    a = 1;
    repeat=3;
    
    printf("Developer Mode, Alpha Version 0.1\n");
    //scanf ("%[^\n]%s", x);
    //important! gets will make this code unsecured, pls change it in future
    gets(x);
    
    printf("\n\n\nThis is the string that you entered : %s",x);
    printf("\n(in pc lang)The string's length is : %d\n",string_length(x));
    
    scanf("%d%d",&enc_1,&enc_2);
    
    printf("\n\n\nenc_1 : %d  enc_2 : %d",enc_1,enc_2);
    
    while((((enc_1*a) > (enc_2*a)) ? (enc_1*a) : (enc_2*a)) < (string_length(x)*repeat))
    {
        swap(enc_1*a,enc_2*a);
        printf("\n(changed text)%s",x);
    	printf("\nstring's updated length : %d",string_length(x)*repeat);
        a++;
    }
    printf("\nresult : %s",x);
}
