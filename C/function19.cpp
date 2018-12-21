#include<stdio.h>
#include<conio.h>

int get_num(void);

int main()
{
	int m;
	m=get_num();
	printf("%d",m);
	return 0;
	getch();
}

int get_num(void)
{
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	return(num);
}
