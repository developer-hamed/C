#include<stdio.h>
#include<conio.h>
void main(void)
{
	int a,d=0;
	clrscr();
	printf("\n Enter number:");
	scanf("%d",&a);
	printf(" The inverse is:");
	do{
		d=a%10;
		printf("%d",d);
		a/=10;
	} while(a!=0);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}