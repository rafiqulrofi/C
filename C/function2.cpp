#include<stdio.h>
#include<conio.h>

double volume(double s1, double s2, double s3);

int main(void)

{
	
	double vol;
	
	vol = volume(12.4,34.4,12.5,45.6); //error//
	
	printf("volume: %.2f",vol);
	
	getch();
	return 0;
	
}

double volume(double s1,double s2,double s3)
{
	return s1 * s2* s3;
}
    
