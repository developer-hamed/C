#include<stdio.h>
#include<conio.h>
void main(void)
{
	int a,i;
	clrscr();
	printf(" Enter a number:");
	scanf("%d",&a);
	for(i=2; i<a; i++)
	{
		if(a%i==0)
		{	printf(" %d is not a prime number.",a);
			break;
		}
		else
		{
			printf(" %d is a prime number and just could be divided by %d and 1.",a,a);
			break;
		}
	}
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}