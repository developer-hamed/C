#include<stdio.h>
#include<conio.h>
void main(void)
{
	float a,c=0,b=0;
	clrscr();
	printf("\n Enter number:");
	scanf("%f",&a);
	do{
		b+=0.5;
d	} while((b*b)!=a);
	printf(" The square root is:%f",b);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}