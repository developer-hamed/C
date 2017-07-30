#include<stdio.h>
#include<conio.h>
void main(void)
{
	int i,counter;
	clrscr();
	for(i=10,counter=1; i<=50; i++,counter++)
	{
		if(i%2==0)
			printf(" %d.%d\t",counter--,i);
	}
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}