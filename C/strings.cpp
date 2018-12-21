#include<stdio.h>
#include<conio.h>

int main()
{
	char str[10];
	int i;
	printf("enter is your valu: ");
	gets(str);
	for(i=0;i<10;i++)
	printf("%s\n",str);
	getch();
	return 0;
	
}
