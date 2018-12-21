#include<stdio.h>
#include<conio.h>

int main()

{
	float *fp,**mfp,val;
	
	fp = &val;
	mfp = &fp;
	
	**mfp = 123.123;
	printf("%.3f\n%.3f\n%.3f", val,*fp,**mfp);
	
	getch();
	return 0;
}
