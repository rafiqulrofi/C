    #include<stdio.h>
    #include<conio.h>
    int main()
    {
	
	
	int i=20,*p;
    p=&i;
    printf("output 1= %d",sizeof(*p));
    printf("output 2= %d",p);
    (*p)++;
    printf("output 3= %d",*p);
    printf("output 4= %d",p);
    *p++;
    printf("output 5= %d",*p);
    printf("output 6= %d",p);
    int *a,**b,j=10;
    a=&j;
    b=&a;
    **b=32;
    j++;
    *a=30;
    printf("output 7= %d",*a);
    printf("output 8= %d",j);
    
    return 0;
}

