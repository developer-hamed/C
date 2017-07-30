#include<stdio.h>
#include<conio.h>
void main(void)
{
	int i;
	char ch[8];
	clrscr();
	printf(" Enter a 8-length string:");
	scanf("%s",ch);
	printf(" What you entered was:");
	for(i=0; i<8; i++)
		printf("%c",ch[i]);
	printf("\n The inverse is:");
	for(i=7; i>=0; i--)
		printf("%c",ch[i]);
	printf("\n The first half is:");
	for(i=0; i<4; i++)
		printf("%c",ch[i]);
	printf("\n The second half is:");
	for(i=4; i<8; i++)
		printf("%c",ch[i]);
	printf("\n The first half inverse is:");
	for(i=3; i>=0; i--)
		printf("%c",ch[i]);
	printf("\n The second half inverse is:");
	for(i=7; i>3; i--)
		printf("%c",ch[i]);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}