#include<stdio.h>
#include<conio.h>

void prinline(char ch);
void value(float,float,int);

int main()
{
	float principal,inrate;
	int period;
	
	printf("Enter your principal,inrate,period");
	
	scanf("%f %f %d",principal,inrate,period);
	
	prinline('Z');
	value(principal,inrate,period);
	prinline('C');
	
	return 0;
	getch();
	
}

void principal(char ch)
{
	int i;
	for(i=0;i<=52;i++)
	{
		printf("%c",ch);
		
		printf("\n");
	}
}

void value(float p,float i,int n)
{
	int year;
	float sum;
	sum=p;
	year=1;
	
	while(year<=n)
	{
		sum=sum*(1+i);
		year=year+1;
	}
	
	printf("%f\t%f\t%d\t%f\n",p,i,n,sum);
}
