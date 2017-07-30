#include<stdio.h>
#include<conio.h>
void main(void)
{
	int i,j,w=219;
	for(i=1; i<=79; i++)
		for(j=1; j<=24; j++)
		{
			gotoxy(i,j);
			printf("%c",w);
		}
	getch();
}