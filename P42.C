#include<stdio.h>
#include<conio.h>
void main(void)
{
	int i,count;
	clrscr();
	for(i=0,count=1; i<=19; i++,count++)
	{
		if(i++%2==0)
			printf(" %d.%d\t",count,i);
	}
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}
