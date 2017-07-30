#include<stdio.h>
#include<conio.h>
void main(void)
{
	int a,i;
	clrscr();
	printf(" Enter a number:");
	scanf("%d",&a);
	printf(" %d could be divided by:");
	for(i=1; i<=a; i++)
	{
		if(a%i==0)
			printf(" %d",i);
	}
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}