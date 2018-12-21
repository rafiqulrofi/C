#include<stdio.h>

int main()
{
	int i,j,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<5;j+=2)
		{
			sum=sum*i+j;
		
		}
		
	}
     printf("%d",sum);
}
