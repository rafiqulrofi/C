#include<stdio.h>
#include<conio.h>
int main()

  {  
        int a;
        scanf("%d",&a);
        if(a>10)
        a=++a;
        printf("%d",a);
        getch();
        return 0;
}
