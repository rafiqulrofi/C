#include<stdio.h>
int main()
{
	int a,b='+',c,sum=0;
	scanf("%d",&a);
	scanf("%c",&b);
	scanf("%d",&c);
	if(b=='+')
	{
	
	sum=a+c;
	printf("%d",sum);
}
else if  (b=='-')
{
	sum=a-b;
	printf("%d",sum);
}

	return 0;
	
	
}
