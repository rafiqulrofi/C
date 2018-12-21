#include<stdio.h>
#include<conio.h>

void prinline(char ch);
void value(float principal, float inrate, int period);
 int main()
{
	
	float principal,inrate;
	int period;
	
	printf("Enter your principal,inrate,period");
	scanf("%f %f %d",&principal,&inrate,&period);
	prinline('Z');
	
	value(principal,inrate,period);
	
	prinline('C');
	return 0;
	getch();
}

void prinline(char ch)
{
	int i;
	
	for(i=0;i<=52;i++)
	
	
	printf("%c",ch);

	printf("\n");

}

void value(float principal,float inrate,int period)
{
	float sum;
	int year;
	sum=principal;
	year=1;
	while(year<=period)
	{
		sum=sum*(1+inrate);
		year=year+1;
	}
	
	printf("%f\t%f\t%d\t%f\n",principal,inrate,period,sum);
}
