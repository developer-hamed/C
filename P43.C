#include<stdio.h>
#include<conio.h>
void main(void)
{
	int i;
	clrscr();
	for(i=50; i<=70; i++)
	{
		printf(" %d\t",i);
	}
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}
