
#include <stdio.h>
 
int main()
{
    int i, num,numr, odd_sum = 0, even_sum = 0;
 
    printf("Enter the value of num\n");
    scanf("%d", &num);
    scanf("%d", &numr);
    for (i = num; i <= numr; i++)
    {
        if (i % 2 == 1)
            even_sum = even_sum + i;
        else
            odd_sum = odd_sum + i;
    }
    printf("Sum of all odd numbers  = %d\n", odd_sum);
    printf("Sum of all even numbers = %d\n", even_sum);
}

