#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()

{
	char country_name[40]="pepole's Repuplic of";
	
	strcat(country_name," Bangladesh");
	printf("Bangladesh's full name: %s",country_name);
	
	getch();
	return 0;
}
