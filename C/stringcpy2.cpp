#include<string.h>
#include<stdio.h>
#include<conio.h>

int main()
{
	char str[80];
	
	strcpy(str,"this is a test");
	strcat(str," ,strcpy,strcat");
	printf("%s",str);
	getch();
	return 0;
}

