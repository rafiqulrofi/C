#include<stdio.h>
#include<conio.h>

int main ()
{
	int a1[10],a2[10];
	int i,sum=0,aveg;
	for(i=0;i<=10;i++)
   	a1[i-1]=i;
	for(i=0;i<10;i++)
	a2[i]=a1[i];
	for(i=0;i<10;i++)
	printf("%d\n",a2[i]);
	sum=sum+a1[i]+a2[i];
	aveg=sum/2;
	printf("\n\n%d",aveg);
	
	getch();
    return 0;
}
