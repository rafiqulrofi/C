#include<stdio.h>
#include<conio.h>

int main()
{
	int p,q,r;
	char aa;
	printf("enter a number between p,q,aa :");
	scanf("%c %d %d",&aa,&q);
	
	switch(r)
	{ case 1:
		(aa=='p'||aa=='A');
		r=p+q;
		printf("%d",r);
		break;
		
	  case 2:
	   printf("two");
	   break;
	   
	  case 3:
	   printf("three");
	   break;
	   
	  case 4:
	   printf("four");
	   break;
	
	  default:
	  	printf("not rang number");
	  
	}
	
	getch();
	return 0;
}
