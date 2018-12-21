    #include<stdio.h>
    #include<conio.h>
    
    int main()
    {
    	
	
	
	int i=20,*p;
    p=&i;
    printf("\noutput 1= %d",sizeof(*p));
    printf("\noutput 2= %d",p);
    (*p)++;
    printf("\noutput 3= %d",*p);
    printf("\noutput 4= %d",p);
    *p++;
    printf("\noutput 5= %d",*p);
    printf("\noutput 6= %d",p);
    int *a,**b,j=30;
    a=&j;
    b=&a;
    **b=32;
    j++;
    *a=30;
    printf("\noutput 7= %d",*a);
    printf("\noutput 8= %d",j);
    
    getch();
    return 0;
    } 

