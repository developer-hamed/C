#include<stdio.h>
#include<conio.h>
void main(void)
{
	int code;
	clrscr();
	printf(" Enter a character:");
	code=getche();
	printf("\n ASCII code is:%d",code);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}