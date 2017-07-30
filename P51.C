#include<stdio.h>
#include<conio.h>
void main(void)
{
	int x,y;
	clrscr();
	for(x=1; x<=24; x++)
	{
		switch (x)
		{
			case 1:
				printf("--------------------------------------------------------------------------------");
				break;
			case 24:
				printf("--------------------------------------------------------------------------------");
				break;
			default:
				printf("|                                                                              |");
		}
	}
	getch();
}