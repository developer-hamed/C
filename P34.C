#include<stdio.h>
#include<conio.h>
void main(void)
{
	float a,c;
	char b;
	clrscr();
	printf(" Enter your mathematical expression:");
	scanf("%f%c%f",&a,&b,&c);
	if(c==0 && b=='/')
	{
		printf(" Can not divide by zero.");
		gotoxy(1,24);
		printf(" Press any key to exit...");
		getch();
	}
	else
		{
			switch(b)
			{
				case '+':
					printf(" The sum is :%f",a+c);
					break;
				case '-':
					printf(" The minus is:%f",a-c);
					break;
				case '*':
					printf(" The multiply is:%f",a*c);
					break;
				case '/':
					printf(" The division is:%f",a/c);
					break;
				default:
					printf(" Wrong expression");
			}

		gotoxy(1,24);
		printf(" Press any key to exit...");
		getch();
	}
}