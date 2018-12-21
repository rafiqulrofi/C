#include<stdio.h>
#include<conio.h>

int main()
  {
         int score;
         
         printf("Enter your score:");
         scanf("%d",&score);
         
         if((score>=80)&&(score<=100))
         printf("\nYour grade is A+.\nGrade point:4.00");
         
         else if((score<80)&&(score>=75))
         printf("\nYour grade is A.\nGrade point:3.75");
         
         else if((score<75)&&(score>=70)) 
         printf("\nYour grade is A-.\nGrade point:3.50");
         
         else if((score<70)&&(score>=65))
         printf("\nYour grade is B+.\nGrade point:3.25");
         
         else if((score<65)&&(score>=60))
         printf("\nYour grade is B.\nGrade point:3.00");
         
         else if((score<60)&&(score>=55))
         printf("\nYour grade is B-.\nGrade point:2.75");
         
         else if((score<55)&&(score>=50))
         printf("\nYour grade is C+.\nGrade point:2.50");
         
         else if((score<50)&&(score>=45))
         printf("\nYour grade is C.\nGrade point:2.25");
         
         else if((score<45)&&(score>=40))
         printf("\nYour grade is D.\nGrade point:2");
         
         else
         
         printf("\nYour grade is F.\nGrade p0int:0.00");
         
         getch();
}
         
         
         
         
         
         
      
         
         
