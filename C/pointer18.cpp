#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()

{
	 char *p = "stop";
	 char str[80];
	 
	 do
	 {
	 	printf("Enter a string: ");
	 	
	 	gets(str);
	 }
	 
	while(strcmp(p,str));
	 
	 getch();
	 return 0;
}
