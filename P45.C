#include<stdio.h>
#include<conio.h>
void main(void)
{
	int i;
	clrscr();
	for(i=0; i<=255; i++)
	{
		printf(" %d:%c ",i,i);
	}
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}