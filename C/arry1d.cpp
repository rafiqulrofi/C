#include<stdio.h>
#include<conio.h>


int main()
{
	int a[5],i;
	for(i=0;i<=4;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++){
		printf("%d\n",a[i]);
	}
	getch();
	return 0;
}
