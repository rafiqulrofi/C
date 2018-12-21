#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n,sum=0;
	
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
			
		}
		}
		if(sum==n)
		{
			printf("it is perfect number");
		}
		else
		{
			printf("it is not perfect number");
		}
		
	getch();
	return 0;
	}
	

