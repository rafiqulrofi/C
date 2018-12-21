#include<stdio.h>
#include<conio.h>

int main()
{
	int a[10] [10],b[10] [10],i,j;
	printf("1st Matrix\n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			scanf("%d",&a[i][j]);
			b[j][i]=a[i][j];
		}
	}
	    printf("2nd Matrix");
		for(j=0;j<=2;j++){
			printf("\n");
		for(i=0;i<=2;i++){
			printf("%d\t",b[j][i]);
		}
	}
	getch();
	return 0;

	
}
