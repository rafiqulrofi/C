#include<stdio.h>
#include<conio.h>

int get_a_char(void);

int main(void)

{
	char ch;
	
	ch = get_a_char();
	printf("%c",ch);
	
	getch();
	return 0;
}


	int get_a_char()
{
	return 'A';
}
