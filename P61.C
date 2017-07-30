#include<stdio.h>
#include<conio.h>
void main(void)
{
	int a,d=0;
	clrscr();
	printf(" Enter number:");
	scanf("%d",&a);
	do{
		d++;
		a/=10;
	} while(a!=0);
	printf(" The number has %d digit(s)",d);
	gotoxy(1,24);
	printf(" Press any key to exit.");
	getch();
}