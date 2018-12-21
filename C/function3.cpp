#include<stdio.h>
#include<conio.h>

float getnum(void)

{
	float x;
	
	printf("Enter a number: ");
	
	scanf("%f",&x);
	
	return x;
}

int main(void)
{
	float i;
	i = getnum();
	printf("%.2f",i);
	
	getch();
	return 0;
}
