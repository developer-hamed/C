#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main(void)
{
	char c;
	clrscr();
	while(c!=27)
	{
		clrscr();
		c=getch();
		printf(" The ascii code of %c is:%d",c,c);
		delay(1700);
	}
}