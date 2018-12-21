#include<string.h>
#include<stdio.h>
#include<conio.h>

int main()
{
	char str[80];
	
	strcpy(str,"hello");
	strcat(str," there");
	printf("%s",str);
	
	getch();
	return 0;
}
