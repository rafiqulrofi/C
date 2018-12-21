#include<stdio.h>
#include<conio.h>

void myputs(char *p);

int main()

{
	myputs("this is a test");
	
	getch();
	return 0;
	
}

void myputs(char *p)

{
	while(*p)
	{
		printf("%c",*p);
		
		p++;
	}
	
	printf("\n");
}
