#include<stdio.h>
#include<conio.h>

int main()
{
	int score,grade;
	printf("\n\a Enter your value:");
	scanf("%d",&score);
	grade =score/10;
	switch(grade)
{   case  10:
	case  9:
		printf("\n your grade is A");
		break;
		
	case   8:
		printf("\n your grade is B");
		break;
		
	case   7:
		printf("\n your grade is C");
		break;
		
	case   6:
		
	printf("\n your grade is D");
		break;
		
	default  :
		printf("\n your grade is F");
		break;
		
}


getch();
return 0;
}
