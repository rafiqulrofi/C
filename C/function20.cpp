#include<stdio.h>
#include<conio.h>

int main()
{
	float largest(float a[], int n);
	
	float value[4]={8.4,-4.5,7.5,3.2};
	
	printf("%.2f\n",largest (value,4));
}


float largest(float a[],int n)
{
	int i;
	float max;
	max=a[0];
	for(i=1;i<n;i++)
	
	if(max<a[i])
	max=a[i];
	
	return(max);
}
