#include<stdio.h>
#include<conio.h>
void main(void)
{
	int a;
	clrscr();
	printf("\n Enter length of side:");
	scanf("%d",&a);
	printf("\n Press any key to calculate...");
	getch();
	printf("\n\n Area is:%d",a*a);
	printf("\n Prime is:%d",a*4);
	gotoxy(1,24);
	printf("Press any key to exit...");
	getch();
}