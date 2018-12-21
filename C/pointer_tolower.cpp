#include<ctype.h>
#include<stdio.h>
#include<conio.h>


int main()

{
	char str[80];
	char *p;
	
	
	printf("Enter a string: ");
	
	gets(str);
	
	p = str;
	
	while(*p)
	
	{
		*p = toupper(*p);
	 	p++;
	}
	
	printf("%s\n",str);
	
	p = str;
	
	while(*p)
	
	{
		*p = tolower(*P);
		p++;
	}
	
	printf("%s\n",str);
	
	getch();
	return 0;
}


