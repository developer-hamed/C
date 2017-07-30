#include<stdio.h>
#include<conio.h>
void main(void)
{
	int i;
	float a,b;
	clrscr();
	for(i=1,a=0,b=0; i<=5; i++)
	{
		switch(i)
		{
			case 1:
				printf(" Enter %dst number:",i);
				break;
			case 2:
				printf(" Enter %dnd number:",i);
				break;
			case 3:
				printf(" Enter %drd number:",i);
				break;
			default:
				printf(" Enter %dth number:",i);
		}
		scanf("%f",&a);
		b+=a;
	}
	printf(" The average is:%f",b/5);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}