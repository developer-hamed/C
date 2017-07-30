#include<stdio.h>
#include<conio.h>
void main(void)
{
	float a,b,c,d,e;
	clrscr();
	printf(" Enter 1st number:");
	scanf("%f",&a);
	printf(" Enter 2nd number:");
	scanf("%f",&b);
	printf(" Enter 3rd number:");
	scanf("%f",&c);
	printf(" Enter 4th number:");
	scanf("%f",&d);
	printf(" Enter 5th number:");
	scanf("%f",&e);
	if(a>=b && a>=c && a>=d && a>=e)
		printf(" %f is the biggest.",a);
	else if(b>=a && b>=c && b>=d && b>=e)
		printf(" %f is the biggest.",b);
	else if(c>=a && c>=b && c>=d && c>=e)
		printf(" %f is the biggest.",c);
	else if(d>=a && d>=b && d>=c && d>=e)
		printf(" %f is the biggest.",d);
	else if(e>=a && e>=b && e>=d && e>=d)
		printf(" %f is the biggest.",e);
	if(a<=b && a<=c && a<=d && a<=e)
		printf("\n %f is the smallest.",a);
	else if(b<=a && b<=c && b<=d && b<=e)
		printf("\n %f is the smallest.",b);
	else if(c<=a && c<=b && c<=d && c<=e)
		printf("\n %f is the smallest.",c);
	else if(d<=a && d<=b && d<=c && d<=e)
		printf("\n %f is the smallest.",d);
	else if(e<=a && e<=b && e<=d && e<=d)
		printf("\n %f is the smallest.",e);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}