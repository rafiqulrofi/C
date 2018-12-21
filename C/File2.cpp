#include<stdio.h>
#include<conio.h>

int main()
{
	FILE *new_file;
	new_file=fopen("c:\\test.ncg","w");
	
	if(new_file==NULL){
		printf("\n Error:file dose not Exist.");
	}
	else{
		printf("\n File succfuly opened");
	}
	getch();
	return 0;
	
}
