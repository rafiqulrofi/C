#include<stdio.h>
#include<conio.h>

int main()
{
char*getline;
FILE* fp;

fp=fopen("H:\\Dataup","w");

fputs("home computing group\n",fp);


fclose(fp);


fp=fopen("H:\\Dataup","r");

fgets(getline,19,fp);

printf("\n %s",getline);


getch();
return 0;
}
