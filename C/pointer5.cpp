#include<stdio.h>
#include<conio.h>

int main()

{
	int *p,q;
	
	p=&q;
	
	*p=199;
	
	printf("%d",q);
	
	getch();
	return 0;
}
