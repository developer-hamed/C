#include<stdio.h>
#include<conio.h>
void pass(char sim[8])
{
	int i;
	for(i=0; i<8; i++)
		if(sim[i]>=97 && sim[i]<=122 && sim[i]!='a' && sim[i]!='A' && sim[i]!='e' && sim[i]!='E' && sim[i]!='o' && sim[i]!='o')
			sim[i]-=32;
		else
			switch(sim[i])
			{
				case 'a':
					sim[i]='@';
					break;
				case 'A':
					sim[i]='@';
					break;
				case 'e':
					sim[i]='3';
					break;
				case 'E':
					sim[i]='3';
					break;
				case 'o':
					sim[i]='0';
					break;
				case 'O':
					sim[i]='0';
					break;
				default:
					break;
			}
		printf(" The password is: ");
		puts(sim);
}
void main(void)
{
	char sim[8];
	clrscr();
	printf(" Enter an 8-character phrase: ");
	gets(sim);
	pass(sim);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}