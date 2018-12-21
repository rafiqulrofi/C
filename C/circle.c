#include<stdio.h>
#include<conio.h>
int main()
     {
       int radius=2;
       float pi=3.14;
       float area=pi*radius*radius;
       float circum=2*pi*radius;
       
       printf("The area is: %.2f\nThe circumferenceis: %.2f",area,circum);
       
       getch();
       return 0;
      
       }
