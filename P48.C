#include<stdio.h>
#include<conio.h>
void main(void)
{
	int n,i,a=1;
	clrscr();
	printf(" Enter a number:");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		a*=n-(n-i);
	}
	printf(" Factorial of %d is:%d",n,a);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}
