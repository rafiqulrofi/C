#include<stdio.h>
#include<conio.h>

int main()
      {
          float a,b;
          printf("Please enter the first valu");
          scanf("%f",&a);
          printf("please enter the second valu");
          scanf("%f",&b);
          float add=a+b;
          float sub=a-b;
          float mul=a*b;
          float div=a/b;
          printf("addtion=%f\nsubtraction=%f\nmultiplation=%2f\ndivision=%2f",add,sub,mul,div);
          
          getch();
          
          return 0;
          }
      
