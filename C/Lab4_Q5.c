#include<stdio.h>
#include<conio.h>


int main()

{
    int P,Q,b,p,s,bq,pq,sq,T1,T2,T3,T;
    printf("Enter the price of Biscuits\n");
    scanf("%d",&b);
    printf("Enter the price of Pens\n");
    scanf("%d",&p);
    printf("Enter the price of Soda\n");
    scanf("%d",&s);
    printf("Enter the Quantity of Biscuits\n");
    scanf("%d",&bq);
    printf("Enter the Quantity of Pens\n");
    scanf("%d",&pq);
    printf("Enter the Quantity of Soda\n");
    scanf("%d",&sq);
    T1=b*bq;
    T2=p*pq;
    T3=s*sq;
    T=T1+T2+T3;




    printf("    Product     Price       Quantity        Total\n  ");
    printf("  Biscuits     %d            %d             %d\n   ",b,bq,T1);
    printf(" Pens         %d            %d              %d\n   ",p,pq,T2);
    printf(" Soda         %d            %d              %d\n   "),s,sq,T3;
    printf("******************************************************\n");
    printf("                                Grand Total=%d",T);

    getch();









}
