#include<stdio.h>
#include<conio.h>
void main(void)
{
	float a,b,c,d,m;
	clrscr();
	printf(" Enter 1st mark:");
	scanf("%f",&a);
	printf(" Enter 2nd mark:");
	scanf("%f",&b);
	printf(" Enter 3rd mark:");
	scanf("%f",&c);
	printf(" Enter 4th mark:");
	scanf("%f",&d);
	m=(a+b+c+d)/4;
	printf(" The average is:%2.2f",m);
	if(m<10)
		printf("\n Your performance is week.");
	else if(m>=10 && m<15)
		printf("\n Your performance is not bad.");
	else if(m>=15 && m<17)
		printf("\n Your performance is mediocre.");
	else if(m>=17 && m<=20)
		printf("\n Your performance is outstanding!");
	else
		printf("\n Wrong marks");
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}