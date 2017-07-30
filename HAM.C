#include<stdio.h>
#include<conio.h>
int main()
{
	int days,y,m,w;
	clrscr();
	printf("\n Enter days:");
	scanf("%d",&days);
	y=days/360;
	days%=360;
	m=days/30;
	days%=30;
	w=days/7;
	days%=7;
	printf(" %d years and %d monthes and %d weeks and %d days.",y,m,w,days);
	getch();
	return d0;
}