#include<stdio.h>
#include<conio.h>

int main()
{
	char str[80];
	
	*(str+3) = 'R';
	
	printf("%c",*(str+3));
	
	getch();
	return 0;
}
