#include<stdio.h>
#include<conio.h>
void main(void)
{
	int i;
	clrscr();
	for(i=20; i>=0; i--)
	{
		printf("%d ",i);
	}
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}