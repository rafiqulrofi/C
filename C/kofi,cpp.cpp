#include<stdio.h> 
#include<conio.h>
int main () {
	
	int a,b,add,sub,mul,div,mod,choice;
	choice=1,2,3,4,5;
	printf("Enter 1st number:",a);
	scanf("%d",&a);
	printf("Enter 2nd number:",b);
	scanf("%d",&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mod=a%b;
	printf("Enter your choice:",add,sub,mul,div,mod);
	scanf("%d",&add);
	scanf("%d",&sub);
	scanf("%d",&mul);
	scanf("%d",&div);
	scanf("%d",&mod);
	if(choice==1)printf("The Addition Of Two Numbers=%d",add);
	if(choice==2)printf("The Subtraction Of Two Numbers=%d",sub);
	if(choice==3)printf("The Multiplication Of Two Numbers=%d",mul);
	if(choice==4)printf("The Division Of Two Numbers=%d",div);
	if(choice==5)printf("The Remainder Of Two Numbers=%d",mod);
	
	getch();
	return 0;
	
}

