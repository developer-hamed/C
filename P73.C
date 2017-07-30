#include<stdio.h>
#include<conio.h>
void main(void)
{
	int i;
	clrscr();
	for(i=1; i<=24; i++)
	{
		gotoxy(i+27,i);
		printf("*");
	}
	for(i=24; i>=1; i--)
	{
		gotoxy(79-(24+i),i);
		printf("*");
	}
	getch();
}