#include<ctype.h>
#include<stdio.h>
#include<conio.h>

int main()

{
	char str[80];
	int i;
	
	printf("Enter a string: ");
	
	gets(str);
	
	for(i=0;str[i];i++)
	str[i]=toupper(str[i]);
	
	printf("%s\n",str);
	
	for(i=0;str[i];i++)
	str[i]=tolower(str[i]);
	
	printf("%s\n",str);
	
	getch();
	return 0;
}
