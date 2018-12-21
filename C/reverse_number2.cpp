#include<stdio.h>
#include<conio.h>

int main()
{
	int num,r,reverse=0;
	
	printf("Enter a reverse number\n");
	
	scanf("%d",num);
	
	while(num)
	{
		r=num%10;
		
		reverse=reverse+10+r;
		num=num/10;
	}
	
	printf("Reverse of number:%d",reverse);
	getch();
	return 0;
}
