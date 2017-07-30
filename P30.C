#include<stdio.h>
#include<conio.h>
void main(void)
{
	int a;
	clrscr();
	printf(" Enter a number:");
	scanf("%d",&a);
	if(a%2==0)
		printf(" %d is an even number.",a);
	else
		printf(" %d is an odd number.",a);
	gotoxy(1,24);
	printf("Press any key to exit...");
	getch();
}