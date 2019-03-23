#include <stdio.h>

#define MAX(x, y) (((x) > (y)) ? (x):(y))

void main()
{
	int a, b;
	printf("2 sayi girin\n");
	scanf("%d%d",&a, &b);
	printf("Girilen en buyuk sayi %d dir", MAX(a, b));
}



