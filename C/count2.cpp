#include<stdio.h>

int main()
{
	long long n;
	int i,count=0,mud;
	
	scanf("%lld",&n);
	
	while(n!=0)
	{
		mud=n%10;
		
		count=count+mud;
		n=n/10;
		
	
	}
	

	printf("%d",count);
	
	return 0;
}
