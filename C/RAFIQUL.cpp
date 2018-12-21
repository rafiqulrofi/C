#include<stdio.h>
#include<conio.h>

int main()
{
    int c,d;
    char string[]="RAFIQUL";
    
	printf("_ _ _ _ _ _ _\n");
	
	for(c=0;c<=6;c++)
	{
		d=c+1;
		printf("|%-7.*s|\n",d,string);
	}
	
	
	printf("_ _ _ _ _ _ _\n");
	
	for(c=6;c>=0;c--)
	{
		d=c+1;
		printf("|%-7.*s|\n",d,string);
	}
	
	printf("_ _ _ _ _ _ _");
	
	getch();
	return 0;
	
}
