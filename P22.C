#include<stdio.h>
#include<conio.h>
void main(void)
{
	int d;
	clrscr();
	printf(" Enter a lower case alphabatic character:");
	d=getche();
	printf("\n Upper case:");
	putchar(d-32);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();

}