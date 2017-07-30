#include<stdio.h>
#include<conio.h>
void main(void)
{
	char c;
	clrscr();
	printf(" Enter ascii code:");
	scanf("%d",&c);
	printf("\n\n The character wich is assigned to %d is:%c",c,c);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}