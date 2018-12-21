#include<stdio.h>
#include<conio.h>

int rofi(void);

int main(void)

{
	char ch[80];
	
	ch[80] = rofi();
	printf("%s",ch);
	
	getch();
	return 0;
}


	int rofi(void)
{
	return "rafi";
}
