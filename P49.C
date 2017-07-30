#include<stdio.h>
#include<conio.h>
void main(void)
{
	int i,n;
	clrscr();
	printf(" Enter a number:");
	scanf("%d",&n);
	clrscr();
	for(i=1; i<=n; i++)
	{
		if(i==n)
			printf("1/%d",i);
		else
			printf("1/%d+",i);
	}
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}