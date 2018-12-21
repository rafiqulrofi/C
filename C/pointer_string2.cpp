#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()

{
	char str1[] = "pointers are fun to use";
	char str2[80],*p1,*p2;
	
	p1 = str1 + strlen (str1) - 1;
	
	p2 = str2;
	
	while(p1>=str1)
	*p2++ = *p1--;
	
	*p2 ='\n';
	
	printf("%s %s",str1,str2);
	
	getch();
	return 0;
}
