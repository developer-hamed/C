#include<stdio.h>
#include<conio.h>
void main(void)
{
	char a,b,c,d;
	clrscr();
	printf(" Enter a 4 length expression:");
	a=getche();
	b=getche();
	c=getche();
	d=getche();
	printf("\n Your expression is:");
	putch(a);
	putch(b);
	putch(c);
	putch(d);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}