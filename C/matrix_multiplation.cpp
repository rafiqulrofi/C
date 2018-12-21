#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,k,tem;
	int m[3][3];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		
			tem=0;
			for(k=0;k<3;k++)
			
			tem+=[i][k]*[k][j];
		
		[i][j]=tem;
		printf("%d",tem);
	}
	
	getch();
	return 0;
}
