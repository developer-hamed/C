#include<stdio.h>
void main(void)
{
	int i,n;
	clrscr();
	for(i=0; i<=10; i++)
	{
		printf(" Enter a number:");
		scanf("%d",&n);
		if(n%2==0)
			printf(" %d is even.\n",n);
		else
			printf(" %d is odd.\n",n);
	}
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}