#include<stdio.h>
#include<conio.h>
void main(void)
{
	int a;
	clrscr();
	printf(" Enter a number between 0 and 10000:");
	scanf("%d",&a);
	if(a>=0 && a<=9)
		printf(" %d is a 1 digit number.",a);
	else if(a>=10 && a<=99)
		printf(" %d is a 2 digit number.",a);
	else if(a>=100 && a<=999)
		printf(" %d is a 3 digit number.",a);
	else if(a>=1000 && a<=9999)
		printf(" %d is a 4 digit number.",a);
	else if(a==10000)
		printf(" %d is a 5 digit number.",a);
	else
		printf(" Wrong number");
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}