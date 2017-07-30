#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main(void)
{
	int i;
	clrscr();
	for(i=0; i<77; i++)
	{
		delay(50);
		clrscr();
		gotoxy(i,11);
		printf("Hamed");
	}
	getch();
}