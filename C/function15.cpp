#include<stdio.h>
#include<conio.h>

//int mul(int x,int y);

int main()
{
	int mul(int x,int y);
	
	int z;
	z=mul(10,20);
	printf("%d",z);
	return 0;
}

int mul(int x,int y)
{
	int result;
	result=(x*y);
	
	return(result);
}
