#include<stdio.h>
#include<conio.h>
void main(void)
{
	float a,ax,at,b,bx,bt,c,cx,ct,d,dx,dt,e,ex,et,tx,m,mt;
	clrscr();
	printf(" Enter 1st mark:");
	scanf("%f",&a);
	printf(" Enter coefficient:");
	scanf("%f",&ax);
	printf("\n Enter 2nd mark:");
	scanf("%f",&b);
	printf(" Enter coefficient:");
	scanf("%f",&bx);
	printf("\n Enter 3rd mark:");
	scanf("%f",&c);
	printf(" Enter coefficient:");
	scanf("%f",&cx);
	printf("\n Enter 4th mark:");
	scanf("%f",&d);
	printf(" Enter coefficient:");
	scanf("%f",&dx);
	printf("\n Enter 5th mark:");
	scanf("%f",&e);
	printf(" Enter coefficient:");
	scanf("%f",&ex);
	mt=((a*ax)+(b*bx)+(c*cx)+(d*dx)+(e*dx))/(ax+bx+cx+dx+ex);
	printf("\n Press any key to calculate...");
	getch();
	printf("\n\n The average is:%f",mt);
	gotoxy(1,24);
	printf(" Press any key to exit");
	getch();
}

