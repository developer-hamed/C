#include<stdio.h>
#include<conio.h>
void main (void)
{
	int a;
	char c;
	clrscr();
	printf(" Enter a character:");
	scanf("%c",&c);
	printf(" Enter a number:");
	scanf("%d",&a);
	clrscr();
	gotoxy(38,11);
	printf("%c%d",c,a);
	getch();
}