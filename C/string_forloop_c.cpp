#include<stdio.h>
#include<conio.h>

int main()
{
    int c,d;
    char string[]="Cprogramming";
    
	printf("_ _ _ _ _ _ _\n");
	
	for(c=0;c<=11;c++)
	{
		d=c+1;
		printf("|%12.*s|\n",d,string);
	}
	
	
	printf("_ _ _ _ _ _ _\n");
	
	for(c=11;c>=0;c--)
	{
		d=c+1;
		printf("|%12.*s|\n",d,string);
	}
	
	printf("_ _ _ _ _ _ _");
	
	getch();
	return 0;
	
}
