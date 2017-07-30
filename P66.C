#include<stdio.h>
#include<conio.h>
void main(void)
{
	char ch,c;
	int d=1;
	clrscr();
	gotoxy(35,10);
	printf("---------\n                                 |         |\n                                  ---------");
	gotoxy(35,11);
	do
	{
		d++;
		if(kbhit())
		{
			ch=getch();
			printf("*");
		}
	}while(ch!=13 || d<=9);
	gotoxy(35,13);
	printf("---------\n                                 |         |\n                                  ---------");
	gotoxy(40,14);
	printf("%c",ch);
	getch();
}