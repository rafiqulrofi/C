#include<stdio.h>

int main()
{
	int n;
	while(true)
	{
	
	scanf("%d",&n);
	
	if(n>0)
	{
		printf("This Number is Positive: %d\n",n);
	}
	
	else if(n==0)
	{
		printf("This Number is Neutral: %d\n",n);
	}
	
	else
	{
		printf("This Number is Negative: %d\n",n);
	}
}
	
	return 0;
}
