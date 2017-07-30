#include<stdio.h>
#include<conio.h>
void main(void)
{
	char a;
	int b;
	clrscr();
	printf(" Enter a character:");
	a=getche();
	b=a;
	if(b>=65 && b<=122 && b!=91 && b!=92 && b!=93 && b!=94 && b!=95 && b!=96)
		printf("\n %c is an alphabatic character.",a);
	else if(b>=47 && b<=59)
		printf("\n %c is a digit.",a);
	else
		printf("\n %c is a symbol.",a);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}