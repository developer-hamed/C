#include<stdio.h>
#include<conio.h>
void main(void)
{
	int i,j;
	clrscr();
	for(i=1,j=20; i<=20; i++,j--)
	{
		printf("%d-%d ",i,j);
	}
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}
