#include<stdio.h>
#include<conio.h>

struct student
{
	char name[20];
	int id[10];
	int phn[15];
	float cgpa[10];
	
};

int main()
{   student;
	FILE* fp;
	int i,n;
	
	
	fp=fopen("c:\\phonedir.dat","w");
	
	fscanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	   printf(fp,%s %c %c %.2f\n name[20].[i],id[10].[i],phn[15].[i],cgpa[10].[i]);
	}
	fclose(fp);
	
	
	fp=fopen("c:\\phonedir.dat","r");
	
	while(fscanf(fp,"%s %c %c %.2f",getname,getid,getphn,getcgpa)!=EOF)
   {
	printf("%s %c %c %.2f\n",getname,getid,getphn,getcgpa);
   }

    getch();
    return 0;
	
	
}
