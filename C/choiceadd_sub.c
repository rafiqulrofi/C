#include<stdio.h>
#include<conio.h>

int main()
  {
          int 
          a,b,add,sub,mul,div,mod;
          
          
          printf("Enter your first value:",a);
          scanf("%d",&a);
          
          printf("Enter your first value:",b);
          scanf("%d",&b);
          
          
          scanf("%d",&add,&sub,&mul,&div,&mod);
          add=a+b;
          printf("%d",add);
          sub=a-b;
          printf("%d",sub);
          mul=a*b;
          printf("%d",mul);
          div=a/b;
          printf("%d",div);
          mod=a%b;
          printf("%d",mod);
          
          
          getch();
          return 0;
}
