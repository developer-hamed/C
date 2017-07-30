#include<stdio.h>
#include<conio.h>
#include<dos.h>
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
	delay(500);
	printf("\n\n A");
	delay(500);
	printf("r");
	delay(500);
	printf("e");
	delay(500);
	printf("a");
	delay(500);
	printf(" ");
	delay(500);
	printf("i");
	delay(500);
	printf("s");
	delay(500);
	printf(":");
	delay(500);
	printf("%d",len*wid);
	delay(500);
	printf("\n ");
	delay(500);
	printf("P");
	delay(500);
	printf("r");
	delay(500);
	printf("i");
	delay(500);
	printf("m");
	delay(500);
	printf("e");
	delay(500);
	printf(" ");
	delay(500);
	printf("i");
	delay(500);
	printf("s");
	delay(500);
	printf(":");
	delay(500);
	printf("%d",(len+wid)*2);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}









