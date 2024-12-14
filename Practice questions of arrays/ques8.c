#include<stdio.h>
int main(){

//Perform matrix addition and substraction on 2 matrix
int a[3][3],b[3][3];

printf("Enter the elements of Ist matrix:");

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}

printf("Enter the elements of 2nd matrix:");

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&b[i][j]);
    }
}
int sum[3][3],diff[3][3];

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
       sum[i][j]=a[i][j]+b[i][j];
       diff[i][j]=a[i][j]-b[i][j];
    }
}

printf("The sum of 1st and 2nd matrix is:\n");

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",sum[i][j]);
    }
    printf("\n");
}


printf("\nThe difference of 1st and 2nd matrix is:\n");

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",diff[i][j]);
    }
    printf("\n");
}
return 0;
}