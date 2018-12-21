#include<stdio.h>
#include<conio.h>

int main()
{
	int n,year,month,day;
	printf("Enter days:");
	
	scanf("%d",&n);
	
	if (n%365==0)
	{
		year=n/365;
		printf("year:%d",year);
	}
	
	else if (n%365!=0)
	{
		month=n/30;
		("month:%d",month);
	}
	
	else (day=n/1);
	printf("day:%d",day);
}

