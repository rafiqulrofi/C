#include<stdio.h>
#include<conio.h>




void swap(int *p,int *q) {
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int i=10,j=20;
    printf("Before Swap i = %d, j = %d\n",i,j);
    swap(&i,&j);
    printf("After Swap i = %d, j = %d\n",i,j);
    return 0;
}

