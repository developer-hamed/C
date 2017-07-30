#include<stdio.h>
#include<conio.h>
void main(void)
{
	char ch[8];
	int i,l1=218,l2=191,l3=192,l4=217,h=196,v=179;
	clrscr();
	gotoxy(35,10);
	printf("%c%c%c%c%c%c%c%c%c%c%c\n                                  %c         %c\n                                  %c%c%c%c%c%c%c%c%c%c%c",l1,h,h,h,h,h,h,h,h,h,l2,v,v,l3,h,h,h,h,h,h,h,h,h,l4);
	gotoxy(36,11);
	for(i=0; i<9; i++)
	{
		ch[i]=getch();
		if(ch[i]==13)
			break;
		else
			printf("*");
	}
	gotoxy(35,13);
	printf("%c%c%c%c%c%c%c%c%c%c%c\n                                  %c         %c\n                                  %c%c%c%c%c%c%c%c%c%c%c",l1,h,h,h,h,h,h,h,h,h,l2,v,v,l3,h,h,h,h,h,h,h,h,h,l4);
	gotoxy(36,14);
	for(i=0; i<9; i++)
		if(ch[i]==13)
			break;
		else
			printf("%c",ch[i]);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}