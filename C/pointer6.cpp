#include<stdio.h>
#include<conio.h>

int main()

{
	double *p;
	double q;
	
	p=&q;
	
	*p=199.33;
	
	printf("%.2f",*p);
	
	getch();
	return 0;
}
