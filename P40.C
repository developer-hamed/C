#include<stdio.h>
#include<conio.h>
void main(void)
{
	int i;
	clrscr();
	for(i=1; i<=100; i++)
	{
		printf(" %d.%d\t",i,i*5);
	}
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}