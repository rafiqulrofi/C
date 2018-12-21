#include<stdio.h>
#include<conio.h>

int main()

{
	char *p , **mp, str[80];
	
	p = str;
	mp = &p;
	
	printf("Enter a string: ");
	
    gets(*mp);
	
	printf("Hi %s",*mp);
	
	getch();
	return 0;
}
