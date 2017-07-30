#include<stdio.h>
#include<conio.h>
void main(void)
{
	int a,b,c;
	clrscr();
	printf(" Enter first number:");
	scanf("%d",&a);
	printf(" Enter second number:");
	scanf("%d",&b);
	printf(" Enter third number:");
	scanf("%d",&c);
	if(a>=b && a>=c)
		printf(" %d is the biggest.",a);
	else if(b>=a && b>=c)
		printf(" %d is the biggest.",b);
	else if(c>=a && c>=b)
		printf(" %d is the biggest.",c);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}