#include<stdio.h>
#include<conio.h>

int main()
{
	int n,year,month,day;
	
	printf("Enter days:");
	
	scanf("%d",&n);
	

	year=n/365;
	month=n/30;
	day=n/1;
	
	
	
	
	printf("year:%d \n\n",year);
	printf("month:%d \n\n",month);
	printf("day:%d",day);
          
          
	getch();
	return 0;
	
}
