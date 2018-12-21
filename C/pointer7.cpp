#include<stdio.h>
#include<conio.h>

int main()

{
	char *cp ,c;
	int *ip ,i;
	float *fp ,f;
	double *dp ,d;
	
	cp=&c;
	ip=&i;
	fp=&f;
	dp=&d;
	
	printf("%p %p %p %p\n\n",cp,ip,fp,dp);
	
	cp++;
	ip++;
	fp++;
	dp++;
	
	printf("%p %p %p %p\n",cp,ip,fp,dp);
	
	getch();
	return 0;
}
