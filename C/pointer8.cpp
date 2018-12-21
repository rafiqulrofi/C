#include<stdio.h>
#include<conio.h>

int main()

{
	int *p,q;
	
	p=&q;
	
	q=1;
	
	printf("%p\n",p);
	
	*p++;
	printf("%d\n%p",q,p);
	
	getch();
	return 0;
}
