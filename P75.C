#include<conio.h>
#include<stdio.h>
#include<dos.h>
void main(void)
{
	char as1;
	int x=40,y=11,w=219;
	clrscr();
	while(1)
	{
		as1=getch();
		if(as1==0)
			as1=getch();
		else
			exit(0);
		switch(as1)
		{
			case 77:
			{
				if(x==79)
					break;
				else
				{
					clrscr();
					gotoxy(x++,y);
					printf("%c",w);
				}
				break;
			}
			case 75:
			{
				if(x==1)
					break;
				else
				{
					clrscr();
					gotoxy(x--,y);
					printf("%c",w);
				}
				break;
			}
			case 80:
			{
				if(y==24)
					break;
				else
				{
					clrscr();
					gotoxy(x,y++);
					printf("%c",w);
				}
				break;
			}
			case 72:
			{
				if(y==1)
					break;
				else
				{
					clrscr();
					gotoxy(x,y--);
					printf("%c",w);
				}
				break;
			}
			default:
				exit(0);
		}
	}
}