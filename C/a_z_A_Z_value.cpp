#include<stdio.h>
#include<conio.h>

int main()
{
	char c;
	
	printf("\n\n");
	for(c=0;c<=122;c++)
	{
		if(c>90 && c<97)
		continue;
		printf("|%4d-%c",c,c);
	
	}
	
	printf("|\n");
	
	getch();
	return 0;
}
