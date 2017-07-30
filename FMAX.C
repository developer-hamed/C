#include<stdio.h>
#include<conio.h>
int fmax(char a[])
{
	int i,j,max=0,tmax=0,temp=0;
	for(i=0;i<15;i++)
	{
		temp=0;
		for(j=0;j<15;j++)
		{
			if(a[i]==a[j])
			temp++;
		}
		if(temp>=tmax)
		{
			tmax=temp;
			max=a[i];
		}
	}
	return max;
}
void main(void)
{
	int nmax,i;
	char b[15];
	clrscr();
	printf("Enter 15 numbers:\n");
	for(i=0;i<15;i++)
		scanf("%d",b[i]);
	nmax=fmax(b);
	printf("The mode number is : %d",nmax);
	getch();
}
