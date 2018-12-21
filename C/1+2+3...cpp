#include <stdio.h>
long int multiplyNumbers(int n);

int main()
{
    int n;
    printf("Enter a positive Number: ");
    scanf("%d", &n);
    printf("Sum of Serice %d = %ld", n, multiplyNumbers(n));
    return 0;
}
long int multiplyNumbers(int n)
{
    if (n >= 2)
        return n+multiplyNumbers(n-1);
    else
        return 1;
}
