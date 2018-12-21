#include<string.h>
#include<conio.h>

int main()
{
	char s1[10],s2[10];
	
	gets(s1);
	gets(s2);
	if(strcmp(s1,s2)<0)
	printf("Both string are equl");
	else
	printf("not equl");
	getch();
	return 0;
	
	
}
