#include<stdio.h>
#include<conio.h>
int main()
  { 
        int a,b,c;
        scanf("%d",&a);
        scanf("%d",&b);
        if(a>b)
       { printf("%d max num",a);
        c=a-b;}
        
        else
        
       { printf("%d mian num",b);
        c=b-a;
        printf("\n%d sub",c);}
        
        getch();
        return 0;
}
