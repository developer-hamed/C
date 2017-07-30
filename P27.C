#include<stdio.h>
#include<conio.h>
void main(void)
{
	int f,s;
	clrscr();
	printf(" Press a 2 code key:");
	f=getche();
	s=getche();
	clrscr();
	printf(" Press a 2 code key:");
	printf("\n ASCII code is:%d and %d",f,s);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}