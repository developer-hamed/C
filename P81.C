#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
void main(void)
{
	char as1=0;
	int x=40,y=11,w=219,c=15,i;
	clrscr();
	printf(" Welcom to Basic Paint!");
	printf("\n Press direction keys to move.\n Press m to move brush without painting and then press any key to paint again.\n Press r or R to clear the whole screen.\n Press c or C and then enter on of color numbers below and press enter to change color.");
	printf("\n Press e or E to enable eraser and then change color to disable it.\n Press other keys to exit.\n Colors:");
	for(i=1; i<=15; i++)
	{
		textcolor(i);
		cprintf("%d  ",i);
	}
	gotoxy(1,24);
	printf(" Press any key to start...");
	getch();
	clrscr();
	textcolor(15);
	as1=0;
	while(1)
	{
		as1=getch();
		if(as1==0)
			as1=getch();
		else if(as1!=0 && as1!=77 && as1!=75 && as1!=80 && as1!=72 && as1!='r' && as1!='R' && as1!='E' && as1!='e' && as1!='m' && as1!='M' && as1!='c' && as1!='C')
			break;
		switch(as1)
		{
			case 77:
			{
				if(x==79)
					break;
				else
				{
					gotoxy(x++,y);
					cprintf("%c",w);
				}
				break;
			}
			case 75:
			{
				if(x==1)
					break;
				else
				{
					gotoxy(x--,y);
					cprintf("%c",w);
				}
				break;
			}
			case 80:
			{
				if(y==24)
					break;
				else
				{
					gotoxy(x,y++);
					cprintf("%c",w);
				}
				break;
			}
			case 72:
			{
				if(y==1)
					break;
				else
				{
					gotoxy(x,y--);
					cprintf("%c",w);
				}
				break;
			}
			case 'r':
			{
				clrscr();
				break;
			}
			case 'R':
			{
				clrscr();
				break;
			}
			case 'c':
			{
				scanf("%d",&c);
				textcolor(c);
				break;
			}
			case 'C':
			{
				scanf("%d",&c);
				textcolor(c);
				break;
			}
			case 'e':
			{
				textcolor(0);
				break;
			}
			case 'E':
			{
				textcolor(0);
				break;
			}
			case 'm':
			{
				while(as1!=0)
				{
					as1=getch();
					if(as1==0)
						as1=getch();
					else
						break;
					switch(as1)
					{
						case 77:
						{
							if(x==79)
								break;
							else
							{
								gotoxy(x++,y);
							}
							break;
						}
						case 75:
						{
							if(x==1)
								break;
							else
							{
								gotoxy(x--,y);
							}
							break;
						}
						case 80:
						{
							if(y==24)
								break;
							else
							{
								gotoxy(x,y++);
							}
							break;
						}
						case 72:
						{
							if(y==1)
								break;
							else
							{
								gotoxy(x,y--);
							}
							break;
						}
						default:
							break;
					}
				}
					break;
			}
				default:
					break;
		}
	}
}