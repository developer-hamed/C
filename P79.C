#include<stdio.h>
#include<conio.h>
void main(void)
{
	int a[6],i,sum=0;
	clrscr();
	printf(" Enter a 6-digit number:");
	scanf("%d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]);
	printf(" What you entered is:");
	for(i=0; i<6; i++)
		printf("%d",a[i]);
	printf("\n The inverse is:");
	for(i=5; i>=0; i--)
		printf("%d",a[i]);
	printf("\n The sum of numbers is:");
	for(i=0; i<6; i++)
		sum+=a[i];
	printf("%d",sum);
	printf("\n Even number(s) (is/are):");
	for(i=0; i<6; i++)
		if(a[i]%2==0)
			printf("%d ",a[i]);
	printf("\n Odd number(s) (is/are):");
	for(i=0; i<6; i++)
		if(a[i]%2!=0)
			printf("%d ",a[i]);
	gotoxy(1,24);
	printf(" Press any key to exit...");
	getch();
}