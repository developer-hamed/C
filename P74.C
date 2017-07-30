#include<stdio.h>
#include<conio.h>
void main(void)
{
	int i,j;
	clrscr();
	printf("---------------------------------------\n");
	for(i=1; i<=9; i++)
		printf("|                  |                  |\n");
	printf("---------------------------------------\n");
	gotoxy(1,6);
	printf("---------------------------------------");
	gotoxy(1,2);
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=39; j++)
		{
			printf("A");
		}
		printf("\n");
	}
	gotoxy(1,2);
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=18; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	gotoxy(1,7);
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=39; j++)
		{
			printf("");
		}
		printf("\n");
	}
	gotoxy(1,7);
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=18; j++)
		{
			printf("7");
		}
		printf("\n");
	}
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}
