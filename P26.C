#include<stdio.h>
#include<conio.h>
void main(void)
{
	int d;
	clrscr();
	printf(" Enter a upper case alphabatic character:");
	d=getche();
	printf("\n Lower case:");
	putchar(d+32);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();

}