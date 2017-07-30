#include<stdio.h>
#include<conio.h>
void main(void)
{
	int first,second;
	clrscr();
	printf(" Enter First Number:");
	scanf("%d",&first);
	printf(" Enter Second Number:");
	scanf("%d",&second);
	printf("\n First Number:%d\n Second Number:%d",first,second);
	printf("\n\n Press Any Key To Swap");
	getch();
	printf("\n\n First Number:%d\n Second Number:%d",second,first);
	gotoxy(1,24);
	printf("Press any key to exit...");
	getch();
}
