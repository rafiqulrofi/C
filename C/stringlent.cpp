#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()

{
	char address[200]="NCG-Hell plaza, Heaven Road,Jahannam.";
	int length;
	
	
	length=strlen(address);
	
	printf("\nstring:%s",address);
	printf("\n\nThe string contains %d characters.",length);
	
	getch();
	return 0;
}
