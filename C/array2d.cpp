#include<stdio.h>
#include<conio.h>


int main()
{
	int a[2] [3],i,j;
	for(i=0;i<=1;i++){
		for(j=0;j<=2;j++){
			scanf("%d",&a[i][j]);
		}
	}
for(i=0;i<=1;i++){
	 printf("\n");
	for(j=0;j<=2;j++){
		printf("%d\t",a[i][j]);
	}
}
getch();
return 0;
}
