#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,z;
    printf("Enter is a 1st value:");
    scanf("%d",&a);
    
    printf("Enter is a 2nd value:");
    scanf("%d",&b);
    
    z=(a+b)*(a-b);
    printf("Result is z=%d",z);
    getch();
    return 0;
}
    
