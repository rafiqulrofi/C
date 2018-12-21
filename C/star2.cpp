#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	
	for(j=1;j<=i;j++)
	{
	for(k=1;k<=i;k++)
	printf("*");
    }
    printf("\n");
    }
    getch();
    return 0;
}
