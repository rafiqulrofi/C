#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,k,ca,ra,cb,rb;
	int a[40][40],b[40][40],c[40][40];
	
	printf("Enter first matrix colum and row:\n");
	scanf("%d %d",&ca,&ra);
	
	printf("Enter second matrix colum and row:\n");
	scanf("%d %d",&cb,&rb);
	
	if(ra==cb)
	{
		printf("Enter a matrix:\n");
		
		for(i=0;i<ca;i++)
		{
			for(j=0;j<ra;j++)
			
			scanf("%d",&a[i][j]);
		}
		
		printf("Enter b matrix:\n");
		
		for(i=0;i<cb;i++)
		{
			for(j=0;j<rb;j++)
			
			scanf("%d",&b[i][j]);
		}
		
    
    
      for(i=0;i<ra;i++)
     {
    	for(j=0;j<cb;j++)
    	{
    	 int tem=0;
    		
    		for(k=0;k<ca;k++)
    		{
    			tem+=a[i][k]*b[k][j];
    			c[i][j]=tem;
    			
			 }
		 }
	 }
     
    
    
    
     for(i=0;i<ra;i++)
     {
    	printf("\n");
    	
    	for(j=0;j<cb;j++)
    	{
    		printf("%d",c[i][j]);
		}
	 }
    
    
    printf("\n");
   
  }
	else
	{
	printf("Not Multiplai");
	}
	
	
	
	
	
	getch();
	return 0;
}
