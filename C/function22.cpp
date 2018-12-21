#include<stdio.h>
#include<conio.h>

int fun1(void);
int fun2(void);
int fun3(void);

int x;
int main()
{
	int x;
	x=10;
	
	printf("%d\n",x);
	printf("%d\n",fun1());
	printf("%d\n",fun2());
	printf("%d\n",fun3());
	
	return 0;
	getch();
}

int fun1(void)
{
	x=5;
	x=x+10;
	return(x);
	
}

int fun2(void)
{
	int x;
	x=1;
	return(x);
}

int fun3(void)
{
	
	x=x+10;
	return(x);
	
}
