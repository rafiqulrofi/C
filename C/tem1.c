#include<stdio.h>

int main()
{
    int tem1,tem2;
    
    scanf("%d",&tem1);
    
    scanf("%d",&tem2);
    
    if (((tem1<0)&&(tem2>100))||((tem1>100)&&(tem2<100)))
    
    printf("True");
    
    else
    
    printf("false");
    
    getch();
    return 0;
    
}
