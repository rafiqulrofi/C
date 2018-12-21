#include<stdio.h>
#include<conio.h>

int main()

{
	int x,*y;
	
	x = 1;
	y = &x;
	
	printf("value of y is %x.\n",y);
	printf("value of x is %x.\n",x);
	printf("vaddress of x is %x.\n",&x);
	
	getch();
	return 0;
}
