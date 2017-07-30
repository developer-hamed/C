#include<stdio.h>
#include<conio.h>
void main(void)
{
	int a,b;
	clrscr();
	printf(" Enter first number:");
	scanf("%d",&a);
	printf(" Enter second number:");
	scanf("%d",&b);
	if(a<b)
	{
		printf(" %d is bigger than %d.",b,a);
	}
	else
	{
		printf(" %d is bigger than %d.",a,b);
	}
	gotoxy(1,24);
	printf("Press any key to exit...");
	getch();
}