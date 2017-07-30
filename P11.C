#include<stdio.h>
#include<conio.h>
void main(void)
{
	int a,b,sum,mul,min;
	float div;
	clrscr();
	printf(" Enter first number:");
	scanf("%d",&a);
	printf(" Enter second number(not zero):");
	scanf("%d",&b);
	sum=a+b;
	min=a-b;
	mul=a*b;
	div=a/b;
	printf("\n\n Press any key to calculate...");
	getch();
	printf("\n\n Sum is:%d",sum);
	printf("\n Minus is:%d",min);
	printf("\n Multiply is:%d",mul);
	printf("\n Division is:%f",div);
	gotoxy(1,24);
	printf("Press any key to exit...");
	getch();
}