#include<stdio.h>
#include<conio.h>
void main(void)
{
	float pi,r;
	pi=3.14;
	clrscr();
	printf(" Enter the radius:");
	scanf("%f",&r);
	printf("\n Press any key to calculate...");
	getch();
	printf("\n\n Area is:%f",(r*2)*pi);
	printf("\n Prime is:%f",(r*r)*pi);
	gotoxy(1,24);
	printf("Press any key to exit...");
	getch();
}