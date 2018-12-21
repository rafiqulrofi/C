#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str1[30], str2[40];
	int x;
	
	printf("Enter first string:");
	gets(str1);
	
	printf("\nEnter second sring:");
	gets(str2);
	
	x= strcmp(str1,str2);
	
	if(0 != x)
	
	printf("\nTwo string are not equal");
	
	else
	
	printf("\nTwo string are equal");
	
	getch();
	return 0;
}
