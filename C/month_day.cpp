#include<stdio.h>
#include<conio.h>

int main()
{
	int n, year, month,day;
	
	printf("Enter days:");
	
	scanf("%d",&n);
	year=n/365;
	month=n/30;
	day=n%30;
	printf(" year:%d month:%d day:%d",year,month,day);
	getch();
	return 0;
}
