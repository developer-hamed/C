#include<stdio.h>
#include<conio.h>
void text(int x,int y,char tex)
{
	int i,j;
	clrscr();
	for(i=1; i<=x; i++)
	{
		for(j=1; j<=y; j++)
			printf("%c",tex);
		printf("\n");
	}
}
void main(void)
{
	int x,y;
	char tex;
	clrscr();
	printf(" Enter rows number:");
	scanf("%d",&x);
	printf(" Enter colums number:");
	scanf("%d",&y);
	printf(" Enter a character:");
	tex=getche();
	text(x,y,tex);
	getch();
}


