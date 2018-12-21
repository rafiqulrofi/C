#include<stdio.h>
#include<conio.h>

int main()
  {
       int fahrenheit;
       scanf("%d",&fahrenheit);
       float cl=5*(fahrenheit-32)/9;
       printf("converts to celsius:%.2f",cl);
       
       getch();
       return 0;
       }
