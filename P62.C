#include<stdio.h>
#include<conio.h>
void main(void)
{
	int a,c,d=0,c=0;
	clrscr();
	printf(" Enter number:");
	scanf("%d",&a);
	do{
		d=a%10;
		c+=d;
		a/=10;
	} while(a!=0);
	printf(" Sum of digits are:%d",c);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}