#include<stdio.h>
#include<conio.h>

void printline(void);
void value(void);

int main()
{
	printline();
	value();
	printline();
	
	
	
}


void printline(void)
{
	int i;
	
	for(i=0;i<=35;i++)
	
	printf("_");
	
	printf("\n");
}

void value(void)
{
	int year,period;
	float inrate,sum,principal;
	
	printf("principal amoun?\n");
	scanf("%f",&principal);
	
	printf("Inerest rate?\n");
	scanf("%f",&inrate);
	
	printf("Period?\n");
	scanf("%d",&period);
	
	sum=principal;
	year=1;
	
	while(year<=period)
	{
		sum=sum*(1+inrate);
		year=year+1;
		
	}
	
	printf("\n%8.2f %5.2f %5d %2.2f\n",principal,inrate,period,sum);
}

