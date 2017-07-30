#include<stdio.h>
#include<conio.h>
void main(void)
{
	int i,j;
	char ch;
	clrscr();
	printf(" Enter a character:");
	ch=getch();
	for(i=1; i<=79; i++)
		for(j=1; j<=24; j++)
		{
			gotoxy(i,j);
			printf("%c",ch);
		}
	getch();
}