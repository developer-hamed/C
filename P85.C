#include<stdio.h>
#include<conio.h>
#include<dos.h>
void scroll(char sta[30],int num)
{
	int x=1,y=1;
	for(x=1; x<=24; x++)
		for(y=1; y<=79-num; y++)
		{
			clrscr();
			gotoxy(y,x);
			puts(sta);
			delay(10);
		}
}
int count(char sta[30])
{
	int i,count=0;
	for(i=0; i<=30; i++)
		if(sta[i]>=1 && sta[i]<=256)
			count++;
		else
			break;
	return count;
}
void main(void)
{
	char sta[30],num;
	clrscr();
	printf(" Enter a statement:");
	gets(sta);
	num=count(sta);
	scroll(sta,num);
	getch();
}