#include<stdio.h>
#include<conio.h>
void hash(char sim[20])
{
	int i;
	printf(" The hashtag is: #");
	for(i=0; i<20; i++)
		if(sim[i]==' ')
			printf("_");
		else if(sim[i]>=1 && sim[i]<=255)
			printf("%c",sim[i]);
		else
			break;
}
void main(void)
{
	int i;
	char sim[20];
	clrscr();
	printf(" Enter your simple statement: ");
	gets(sim);
	hash(sim);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}