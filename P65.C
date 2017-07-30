#include<stdio.h>
#include<conio.h>
void main(void)
{
	int a=0,b=0,c=0,d=1;
	clrscr();
	printf(" Enter a number:");
	scanf("%d",&a);
	printf(" Enter power:");
	scanf("%d",&b);
	for(c=1; c<=b; c++)
	{
		d*=a;
	}
	printf(" The resualt is:%d",d);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}