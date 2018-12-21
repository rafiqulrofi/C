#include<stdio.h> 
int main () {
	
	int a,b,p1,p2,p3,p4,p5,choice;
	choice=1,2,3,4,5;
	printf("Enter 1st number:",a);
	scanf("%d",&a);
	printf("Enter 2nd number:",b);
	scanf("%d",&b);
	p1=a+b;
	p2=a-b;
	p3=a*b;
	p4=a/b;
	p5=a%b;
	printf("Enter your choice:",p1,p2,p3,p4,p5);
	scanf("%d",&p1,&p2,&p3,&p4,&p5);
	if(choice==1)printf("The Addition Of Two Numbers=%d",p1);
	if(choice==2)printf("The Subtraction Of Two Numbers=%d",p2);
	if(choice==3)printf("The Multiplication Of Two Numbers=%d",p3);
	if(choice==4)printf("The Division Of Two Numbers=%d",p4);
	if(choice==5)printf("The Remainder Of Two Numbers=%d",p5);
	getch ();
	return 0;

}
