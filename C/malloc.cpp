#include<stdio.h>
#include<stdlib.h>
struct number{
 int n;
};
int main(void){
 int r,c,i,j,k=0;
 struct number **mat1,**mat2,**mat3;
 scanf("%d",&r);
 scanf("%d",&c);
 mat1=(struct number**)malloc(sizeof(struct number*)*r);
 for(i=0;i<r;i++){
 mat1[i]=(struct number*)malloc(sizeof(struct number)*c);
}
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        mat1[i][j].n =k++ ;
    }
}
for(i=0;i<r;i++)
{

    for(j=0;j<c;j++)
    {

        printf(" %d ", mat1[i][j].n);
    }
    printf("\n");
}
 };
