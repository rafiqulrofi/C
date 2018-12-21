#include<stdio.h>
#include<conio.h>

void mystrcpy(char *to,char *from);

int main()

{
	char str[80];
	
	mystrcpy(str,"this is test");
	
	printf("str");
	
	getch();
	return 0;
	
}

void mystrcpy(char *to, char *from)
{
	while(*from)
	 
	*to++ = *from++;
	*to = '\0';
	
}
