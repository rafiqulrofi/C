#include<stdio.h>
#include<conio.h>



    struct Book{
           char name[100];
           char authr[100];
           int id;
           };
    int main(){
        struct Book book1;
        printf("provide Book Name:");
        gets(book1.name);
        printf("provide Authr name:");
        gets(book1.authr);
        printf("\n provide book id:");
        scanf("%d",&book1.id);
        


        printf("\nprovide Book Name:");
        puts(book1.name);
        printf("provide Authr name:");
        puts(book1.authr);
        printf("\n provide book id:");
        printf("%d",book1.id);
        getch();
        return 0;
}
