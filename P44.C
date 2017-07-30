#include<stdio.h>
#include<conio.h>
void main(void)
{
	int i,a=0;
	clrscr();
	for(i=0; i<=10; i++)
	{
		a+=i;
	}
	printf(" Sum of 1 to 10 numbers is:%d",a);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}