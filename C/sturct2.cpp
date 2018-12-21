#include<stdio.h>
#include<conio.h>



    struct Book{
           char name[100];
           char authr[100];
           int id;
           }
    int main(){
        struct Book book1;
        printf("\n provide Book Name:");
        scanf("%s",&book1.name);
        printf("\n provide Authr name:");
        scanf("%s",&book1.authr);
        printf("\n provide book id:");
        scanf("%d",&book1.id);
 
 
        printf("\n provide Book Name:");
        puts(book1.name);
        printf("\n provide Authr name:");
        puts(book1.authr);
        printf("\n provide book id:");
        printf("%d",book1.id);
        getch();
        return 0;
}
