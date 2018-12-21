#include<stdio.h>
#include<conio.h>

int main()
{
	char str[80];
	
	printf("Eter text: \n");
	scanf("%[^\n]",str);
	printf("\n%s",str);
	getch();
	return 0;
}
