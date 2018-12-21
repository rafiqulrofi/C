#include<stdio.h>
#include<conio.h>

int main()
{
    int	m, n, c, d;
	int matrix[40][40],transpose[40][40];
    
    printf("Enter matrix colum and row size:\n");
    scanf("%d %d",&m,&n);
    
    printf("Enter matrix element:\n");
    for(c=0;c<m;c++)
    
    	for(d=0;d<n;d++)
    	{
    		
    	scanf("%d",&matrix[c][d]);
	    }
	
	for(c=0;c<m;c++)
	
		for(d=0;d<n;d++)
	
	
	transpose[d][c]=matrix[c][d];
	
	printf("Transpose of element matrix:\n");
	
	for(c=0;c<n;c++)
	{
	  printf("\n");
	  for(d=0;d<m;d++)
      printf("%d",transpose[d][c]);
	}
	
	getch();
	return 0;
}
