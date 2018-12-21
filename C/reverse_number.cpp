#include<stdio.h>
#include<conio.h>

int main()
{
	int n,reverse=0;
	
	printf("Enter a number reverse\n");
	
	scanf("%d",&n);
	
	while(n!=0)
	{
		reverse=reverse;
		
		reverse=reverse+n%10;
		n=n/10;
	}
	
	printf("Reverse of enter number\n %d",reverse);
	
	getch();
	return 0;
}
