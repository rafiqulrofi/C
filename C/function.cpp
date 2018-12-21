#include<stdio.h>
#include<conio.h>

double volume(double s1, double s2, double s3);

int main(void)

{
	
	double vol;
	
	vol = volume(12.4,5.45,6.34);
	printf("volume: %f",vol);
	
	getch();
	return 0;
	
}

double volume(double s1, double s2,double s3)

{
	return s1 * s2 * s3;
}
