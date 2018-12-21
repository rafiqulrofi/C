#include<stdio.h>
#include<conio.h>



    struct Book{
           char name[100];
           char author[100];
           int id;
           };
    int main(){
        int i;
        struct Book book1[100];
        for(i=0;i<=2;i++){
        printf("\n provide Book Name:");
        scanf("%s",book1[i].name);
        printf("\n provide Author name:");
        scanf("%s",book1[i].author);
        printf("\n provide book id:");
        scanf("%d",&book1[i].id);
        }


        for(i=0;i<=2;i++){
        printf("\n provide Book Name:");
        puts(book1[i].name);
        printf("\n provide Author name:");
        puts(book1[i].author);
        printf("\n provide book id:");
        printf("%d",book1[i].id);
        }
        getch();
        return 0;
}
