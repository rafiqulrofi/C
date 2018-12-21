#include<stdio.h>
#include<conio.h>

int main()
{
	FILE* fp;
	char* f_name;

	printf("\n enter your file name:");
	gets(f_name);
	if( (fp=fopen(f_name,"r") )==NULL){
		printf("\n Error:file dose not found.");
	}
	else{
		printf("\n %s File is found",f_name);
	}
	getch();
	return 0;
	
}
