#include <stdio.h>

char x[256];
int loop_a, loop_b;

void swap(int a, int b)
{
    char yedek;
    
    printf("\n(before exe)a : %d  b : %d  loop_a : %d  loop_b : %d",a,b,loop_a,loop_b);

    if((a/(string_length(x)*loop_a)) >= 1)
    {
        a -= (string_length(x)*loop_a);
        loop_a++;
    }
	printf("\nbefore condution|| b/(string_length(x)*loop_b : %d  string_length(x)*loop_b : %d",b/(string_length(x)*loop_b,string_length(x)*loop_b));
    if((b/(string_length(x)*loop_b)) >= 1)
    {
        b -= (string_length(x)*loop_b);
        loop_b++;
    }

    yedek = x[a];
    x[a] = x[b];
    x[b] = yedek;
    printf("\n(after exe)a : %d  b : %d  loop_a : %d  loop_b : %d",a,b,loop_a,loop_b);
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
    loop_a = 1;
	loop_b = 1;
    printf("Developer Mode, Alpha Version 0.1\n");
    //scanf ("%[^\n]%s", x);
    //important! gets will make this code unsecured, pls change it in future
    gets(x);
    printf("\n\n\nThis is the string that you entered : %s",x);
    printf("\n(in pc lang)The string's length is : %d\n",string_length(x));
    scanf("%d%d",&enc_1,&enc_2);
    printf("\n\n\nenc_1 : %d  enc_2 : %d",enc_1,enc_2);
    a = 1;
    repeat=3;
    while((((enc_1*a) > (enc_2*a)) ? (enc_1*a) : (enc_2*a)) < (string_length(x)*repeat))
    {
        swap(enc_1*a,enc_2*a);
        printf("\n(changed text)%s",x);
    	printf("\nstring's updated length : %d",string_length(x)*repeat);
        a++;
    }
    printf("\nresult : %s",x);
}
