#include<stdio.h>
#include<conio.h>
void main(void)
{
	int wid,len;
	clrscr();
	printf(" Enter length:");
	scanf("%d",&len);
	printf(" Enter width:");
	scanf("%d",&wid);
	printf("\n Press any key to calculate...");
	getch();
	printf("\n\n Area is:%d",len*wid);
	printf("\n Prime is:%d",(len+wid)*2);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}









