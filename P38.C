#include<stdio.h>
#include<conio.h>
void main(void)
{
	char b,c;
	int a,d;
	clrscr();
	printf(" Enter direction either direction keys, Esc or Enter:");
	b=getch();
	a=b;
	if(a==13 || a==27)
		d=0;
	else
		c=getch();
		d=c;
	if(a==0 && d==75)
		printf("\n The key is left direction key.");
	else if(a==0 && d==77)
		printf("\n The key is right direction key.");
	else if(a==0 && d==72)
		printf("\n The key is up direction key.");
	else if(a==0 && d==80)
		printf("\n The key is down key.");
	else if(a==13)
		printf("\n The key is Enter.");
	else if(a==27)
		printf("\n The key is Esc.");
	else
		printf("\n Wrong key");
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}