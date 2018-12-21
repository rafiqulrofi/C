#include<stdio.h>
#include<conio.h>

int factorial(unsigned int i)
{
	if(i<=1)
	{
		return 1;
	}
	return i*factorial(i-1);
}



int main()
{
	int i;
	
	printf("Enter factorial value:");
	
	scanf("%d",&i);
	
	printf("\nFactorial of %d is %d\n",i,factorial(i));
	
	getch();
	return 0;
}
