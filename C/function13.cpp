#include<stdio.h>
#include<conio.h>


int max(int num1, int num2);

int main()
{
	int a;
	int b;
    int ret;
	
	printf("The First Value:\n");
	
	scanf("%d",&a);
	
	printf("The Secent Value:\n");
	
	scanf("%d",&b);
	
    ret=max(a , b);
	printf("The max Value:%d\n",ret);
	
	return 0;
}


int max(int num1, int num2)
{

	
	int result;
	if(num1>num2)
	{
		result=num1;
		
	}
	
	else
	{
		result=num2;
		
	}
	return result;
}
