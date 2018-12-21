#include<stdio.h>
#include<conio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3];
    
    int i,j,k,ar,ac,br,bc,tem;
    
    printf("Enter colum  size A:");
    scanf("%d",&ac);
    

    printf("Enter row  size B : ");
    scanf("%d",&br);
    
    if(ac==br)
    printf("allow")
    
    for(i=0;i<3;i++)
    
    for(j=0;j<3;j++)
    
    tem=0;
    
    for(k=0;k<3;k++)
    
    tem+=[i][k]*[k][j];
    
  
}
    else
    printf("not allow");
    
    
    
    
    
    getch();
    return 0;
}
    
