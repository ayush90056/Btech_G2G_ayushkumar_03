#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j,k;
   int a[r1][c1],b[r2][c2], result[r1][c2];
   
   printf("Enter row or coloum of 1st Matrix\n");
   scanf("%d%d",&r1,&c1);
   printf("Enter row or coloum of 2nd Matrix\n");
   scanf("%d%d",&r2,&c2);
   if(c1!=r2){
    printf("Mul not possible");}
    printf("Enter elements of 1st Matrix\n");
    for(i=0; i<r1; i++){
    for(j=0; i<c1; j++){
    scanf("%d",&a[i][j]);
    printf("Enter element of 2nd Matrix\n");}
        
    }
    for(i=0; i<r2; i++){
      for(j=0; j<c2; j++){
    result[i][j]=0;}}
    for(k=0; k<c1; k++){
    result[i][j]+= a[i][k]*b[k][j];
    printf("Resultant Matrix\n");}
    for(i=0; i<r1; i++){
     for(j=0; j<c2; j++){
    printf("%d", result[i][j]);
    printf("\n");}
    }
    return 0;
   }



    

    