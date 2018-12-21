#include<stdio.h>
#include<conio.h>

int main()
{
	char str[80]="rofi";
	
	
	
	printf("%c%c%c%c",*(str+0),*(str+1),*(str+2),*(str+3));
	
	getch();
	return 0;
}
