#include<stdio.h>
#include<conio.h>

void recourse(int i);

int main()
{
	recourse(0);
	
	getch();
	return 0;
}
void recourse(int i)
{
	if(i<10)
	{
		recourse(i+1);
		
		printf("%d\n",i);
	}
}
