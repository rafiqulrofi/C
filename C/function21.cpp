#include<stdio.h>
#include<conio.h>

void function1(void);

void function2(void);

int main()
{
	int m;
	
	m=1000;
	function2();
	
	printf("%d\n",m);
	
	return 0;
	getch();
}

void function1(void)
{
	int n;
	n=10;
	printf("%d\n",n);
}

void function2(void)
{
	int k;
	k=100;
	function1();
	printf("%d\n",k);
}
