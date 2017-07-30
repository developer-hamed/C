#include<stdio.h>
#include<conio.h>
void main(void)
{
	char c;
	clrscr();
	printf(" Enter a character:");
	c=getche();
	printf("\n The character you have entered is:");
	putch(c);
	gotoxy(1,24);
	printf("\ Press any key to exit...");
	getch();
}

