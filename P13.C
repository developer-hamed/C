#include<stdio.h>
#include<conio.h>
void main(void)
{
	float m1,m2,m3,m4,m5,kol;
	clrscr();
	printf(" Enter 1st mark:");
	scanf("%f",&m1);
	printf(" Enter 2nd mark:");
	scanf("%f",&m2);
	printf(" Enter 3rd mark:");
	scanf("%f",&m3);
	printf(" Enter 4th mark:");
	scanf("%f",&m4);
	printf(" Enter 5th mark:");
	scanf("%f",&m5);
	printf("\n Press any key to calculate...");
	getch();
	kol=(m1+m2+m3+m4+m5)/5;
	printf("\n\n The average is:%f",kol);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}
