#include<stdio.h>
#include<conio.h>

int main()
  {
          int a,b,c;
          printf("Enter the 1at value:");
          scanf("%d",&b);
          
          printf("Enter is 2nd value:");
          scanf("%d",&c);
          
          printf("\nEnter your choice 1 for add,2 for sub,3 for mul,4 for div,5 for mod\n");
          scanf("%d",&a);
          
          if (a==1)
          a=b+c;
          else if (a==2)
          a=b-c;
          
          else if (a==3)
          a=b*c;
          
          else if (a==4)
          a=b/c;
          
          
          else if (a==5)
          a=b%c;
          else
          
          printf("\nwrong input");
          printf("\nResult is:%d",a);
          
          getch();
          return 0;
          
          
          
          
          
}
          
          
