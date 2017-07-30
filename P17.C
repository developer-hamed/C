#include<stdio.h>
#include<conio.h>
void main (void)
{
	int a,col,row;
	char c;
	clrscr();
	printf(" Enter a character:");
	scanf("%c",&c);
	printf(" Enter a number:");
	scanf("%d",&a);
	printf(" Enter column:");
	scanf("%d",&col);
	printf(" Enter row:");
	scanf("%d",&row);
	clrscr();
	gotoxy(col,row);
	printf("%c%d",c,a);
	getch();
}