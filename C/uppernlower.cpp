#include<stdio.h>
int main()
{

    char c, i;
    printf("Enter U To Upper level Alphabets and L To lower level Alphabets: \n");
    scanf("%c",&c);

    if(c=='U'||c=='u')
    {
        for(i='A';i<='Z';i++)
        {
            printf("%c ",i);
        }
        printf("\n");
    }
    else if(c=='L'||c=='l')
    {
        for(i='a';i<='z';i++)
        {
            printf("%c ",i);
        }
        printf("\n");
    }
    else
        printf("It's Error");
}
