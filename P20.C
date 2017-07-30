#include<stdio.h>
#include<conio.h>
void main(void)
{
	int a,h,b,c;
	clrscr();
	printf(" Enter length of bottom side:");
	scanf("%d",&a);
	printf(" Enter length of 2nd side:");
	scanf("%d",&b);
	printf(" Enter length of 3rd side:");
	scanf("%d",&c);
	printf(" Enter height:");
	scanf("%d",&h);
	printf("\n Press any key to calculate...");
	getch();
	printf("\n\n Area is:%d",(a*h)/2);
	printf("\n Prime is:%d",a+b+c);
	gotoxy(1,24);
	printf("Press any key to exit...");
	getch();
}