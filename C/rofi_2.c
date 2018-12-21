#include<stdio.h>
#include<conio.h>

int main()
    {
    int a,b,add,sub,mul,mod;
    float div;
    scanf("%d",&a);
    scanf("%d",&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;

    printf("add=%d\nsub=%d\nmul=%d\ndiv=%.2f\nmod=%d",add,sub,mul,div,mod);
    getch();
    return 0;
    }
