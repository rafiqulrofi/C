#include<stdio.h>
#include<conio.h>

int main()
{
	char str[]="pointers are fun";
	int i;
	char *p;
	
	p = str;
	
	for( i = 0 ; p [i] ; i++ )
	
	printf("%c",p[i]);
	
	getch();
	return 0;
}
