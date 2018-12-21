#include<stdio.h>
#include<conio.h>

int factorial(int n);

int main()
{
	
	int n,fac;
	printf("Enter your factorial value:");
	scanf("%d",&n);
	
	fac=factorial( n);
	
	printf("%d",fac);
	
	return 0;
	getch();
}

int factorial(int n)
{

	int fact;
	if(n==1)
	
		return(1);
	
	
	else
	
		fact=n*factorial(n-1);
		
		return(fact);
	
}
