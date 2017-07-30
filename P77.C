#include<stdio.h>
#include<conio.h>
void main(void)
{
	int num[10],i,max=0,maxnum,min=9999,minnum;
	clrscr();
	for(i=0; i<10; i++)
	{
		printf(" Enter #%d number:",i+1);
		scanf("%d",&num[i]);
		if(num[i]>=max)
		{
			max=num[i];
			maxnum=i+1;
		}
		if(num[i]<=min)
		{
			min=num[i];
			minnum=i+1;
		}
	}
	printf(" %d which is #%d is the biggest.\n %d which is #%d is the smallest.",max,maxnum,min,minnum);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}
