#include<stdio.h>
#include<conio.h>
void main(void)
{
	int num,sa,wid,len,code,x,y;
	float pi,r,a,c;
	char b;
	pi=3.14;
	while(num!=6)
	{
		clrscr();
		for(x=1; x<=24; x++)
		{
			switch (x)
			{
				case 1:
					clrscr();
					printf("--------------------------------------------------------------------------------");
					break;
					case 24:
					printf("--------------------------------------------------------------------------------");
					break;
					default:
					printf("|                                                                              |");
			}
		}
		gotoxy(35,7);
		printf("1.Circle");
		gotoxy(35,9);
		printf("2.Square(not bar)");
		gotoxy(35,11);
		printf("3.Rectangle");
		gotoxy(35,13);
		printf("4.Ascii code");
		gotoxy(35,15);
		printf("5.Calculator");
		gotoxy(35,17);
		printf("6.Exit");
		gotoxy(1,25);
		printf("Enter item number:");
		scanf("%d",&num);
		switch(num)
		{
			case 1:
				{
					clrscr();
					printf(" Enter the radius:");
					scanf("%f",&r);
					printf("\n Press any key to calculate...");
					getch();
					printf("\n\n Area is:%f",(r*2)*pi);
					printf("\n Prime is:%f",(r*r)*pi);
					gotoxy(1,24);
					printf("Press any key to exit...");
					getch();
				}
			break;
			case 2:
				{
					clrscr();
					printf("\n Enter length of side:");
					scanf("%d",&sa);
					printf("\n Press any key to calculate...");
					getch();
					printf("\n\n Area is:%d",sa*sa);
					printf("\n Prime is:%d",sa*4);
					gotoxy(1,24);
					printf("Press any key to exit...");
					getch();
				}
				break;
			case 3:
				{
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
				break;
			case 5:
				{
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
				break;
			case 4:
				{
					clrscr();
					printf(" Enter a character:");
					code=getche();
					printf("\n ASCII code is:%d",code);
					gotoxy(1,24);
					printf(" Press any key to exit...");
					getch();
				}
				break;
			case 6:
				{
					break;
				}
				break;
			default:
				{
					clrscr();
					printf(" Wrong number");
					gotoxy(1,24);
					printf(" Press any key to return...");
					getch();
				}
			}
		}
	}
}