#include<stdio.h>
#include<conio.h>

int main()
{

    char a;
    printf("Enter The Alphabet \n");
    scanf("%c",&a);

    if((a=='A'|a=='I'|a=='E'|a=='O'|a=='U')||(a=='a'|a=='i'|a=='e'|a=='o'|a=='u'))
        printf("It is a Vowel!");
    else
        printf("It is consonant!");
    return 0;
}
