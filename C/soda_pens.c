#include<stdio.h>
#include<conio.h>

int main()

   {
         int
         product,price,quantity,total,biscuits,pens,soda,grant;
         
         printf("Enter is the biscuts price:");
         scanf("%d",&price);
         printf("Enther is the biscuits quantity:");
         scanf("%d",&quantity);
         total=price*quantity;
         
         printf("Enter is the pens price:");
         scanf("%d",&price);
         printf("Enther is the pens quantity:");
         scanf("%d",&quantity);
         total=price*quantity;
         
          printf("Enter is the soda price:");
          scanf("%d",&price);
          printf("Enther is the soda quantity:");
          scanf("%d",&quantity);
          total=price*quantity;
          printf("total=%d");
          grant=total+total+total;
          printf("%d,grant");
          
          getch();
          return 0;
}
         
         
