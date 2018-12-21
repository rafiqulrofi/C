#include<stdio.h>
#include<conio.h>

int main()
    {
        int age;
        printf("Enter The Years:");
        scanf("%d",&age);
        int days=365*age;
        printf("My age in year =%d\nMy age in days=%d",age,days);

        getch();
        return 0;

    }
