#include<stdio.h>
#include<conio.h>
void main(void)
{
	int a,c,b,d=0,c=0,b=0;
	clrscr();
	printf(" Enter number:");
	scanf("%d",&a);
	do{
		d=a%10;
		if(d%2==0)
			c++;
		else
			b++;
		a/=10;
	} while(a!=0);
	printf("\n The number of even digits are:%d",c);
	printf("\n The number of odd digits are:%d",b);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}