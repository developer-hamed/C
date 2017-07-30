#include<stdio.h>
#include<conio.h>
void main(void)
{
	int i;
	for(i=1; i<=24; i++)
	{
		gotoxy(1,i);
		printf("                                                                               ");
	}
	getch();
}