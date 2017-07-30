#include<stdio.h>
#include<conio.h>
void main(void)
{
	int a=1,b=0,i;
	clrscr();
	for(i=1; i<=11; i++)
	{
		a+=b;
		printf("%d.%d ",i,a);
		b+=a;
		printf("%d.%d ",i+1,b);
	}
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}