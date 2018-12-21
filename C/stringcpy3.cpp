#include<string.h>
#include<stdio.h>
#include<conio.h>

int main()
{
	char name_1[40]="Rafiqul Islam Rofi.";
	char name_2[40];
	
	
	strcpy(name_2,name_1);
	
	printf("%s",name_2);
	
	getch();
	return 0;
	
}
