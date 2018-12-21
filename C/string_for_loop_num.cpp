#include<stdio.h>
#include<conio.h>

int main()
{
    int c,d;
    char string[]="1234567890";
    
	printf("_ _ _ _ _ _ _\n");
	
	for(c=0;c<=9;c++)
	{
		d=c+1;
		printf("%.*s\n",d,string);
	}
	
	
	printf("_ _ _ _ _ _ _\n");
	
	for(c=9;c>=0;c--)
	{
		d=c+1;
		printf("%.*s\n",d,string);
	}
	
	printf("_ _ _ _ _ _ _");
	
	getch();
	return 0;
	
}
