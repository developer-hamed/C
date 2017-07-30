#include<stdio.h>
#include<conio.h>
void main(void)
{
	int i,j;
	clrscr();
	for(i=4; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}