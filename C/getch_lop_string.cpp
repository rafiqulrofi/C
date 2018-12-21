#include<stdio.h>
#include<conio.h>

int main()
{
	char line[80],character;
	int c;
	
	printf("Enter text.press<return> at end \n");
	c=0;
	do
	{
		character=getchar();
		line[c]=character;
		c++;
	}
	
	while (character!='\n');
	
	{
		c=c-1;
		line[c]='\0';
		printf("\n%s\n",line);
    }
    
    getch();
    return 0;
    
}
