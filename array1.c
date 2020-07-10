#include<stdio.h>

int main()
{
int i=0,j=0,sum=0;
int mat[3][3];

printf("Enter the values of matrix: ");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
scanf("%d", &mat[i][j]);
}
}

for(i=0;i<3;i++){
for(j=0;j<3;j++){
if(i==j){
sum = sum + *(*(mat+ i)+ j);
}
}
}

printf("\nThe matrix values are\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%d ", *(*(mat+ i)+ j));
}
printf("\n");
}

printf("\nThe sum of diagonal elements is %d", sum);

return 0;
}
