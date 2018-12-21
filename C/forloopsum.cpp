#include<stdio.h>
int main()
{
    int i,j,sum=0;
    for(i=1;i<3;i++)
    {
        for(j=i;j<6;j=j+2)
        {
            sum=sum+i*j;
        }
    }
    printf("%d",sum);
}

