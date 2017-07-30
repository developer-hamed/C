#include<stdio.h>
#include<conio.h>
void main(void)
{
	int i;
	float a[10],m=0;
	clrscr();
	for(i=0; i<10; i++)
	{
		printf(" Enter #%d number:",i+1);
		scanf("%f",&a[i]);
	}
	clrscr();
	for(i=0; i<10; i++)
	{
		printf(" %d.%f",i+1,a[i]);
	}
	getch();
	clrscr();
	for(i=0; i<10; i++)
		m+=a[i];
	printf(" The average is:%f",m/10);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}
