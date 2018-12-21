#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
	char arr[100];
	
	printf("Enter a string to reverse \n");
	
	gets(arr);
	
	strrev(arr);
	
	printf("Reverse of string is \n %s\n\n",arr);
	
	getch();
	return 0;
	
}
