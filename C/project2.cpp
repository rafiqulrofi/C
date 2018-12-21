#include<stdio.h>
#include<conio.h>

int main()
{
	char* name[20];
	char* id[10];
	float cgpa[10];
	
     scanf("%s",&name);
	char* getname;
	scanf("%d",&id);
	char* getid;
	float getcgpa;
	int i;
	FILE* fp;
	
	fp=fopen("c:\\studentinf.ncg","w");
	for(i=0;i<5;i++)
	{
	fprintf(fp,"%-20s %-10s %1.2f \n",name[i],id[i],cgpa[i]);
	}
	fclose(fp);
	fp=fopen("c:\\studentinf.ncg","r");
	
	while(fscanf(fp,"%s %s %f ",getname,getid,&getcgpa)!=EOF)
	{
		printf("%-20s %-10s %1.2f \n",getname,getid,getcgpa);
		
	}
	getch();
	return 0;
	
}
