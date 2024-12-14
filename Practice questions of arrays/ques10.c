#include<stdio.h>
int main(){

//calculate sum of each row and each column in 2d matrix

int a[3][3]={1,2,3,4,5,6,7,8,9};

for(int i=0;i<3;i++){
    int sum=0;
    for(int j=0;j<3;j++){
        sum+=a[i][j];
    }
    printf("The sum of %d row is %d\n",i+1,sum);
}

printf("\n");
for(int j=0;j<3;j++){
    int sum=0;
    for(int i=0;i<3;i++){
        sum+=a[i][j];
    }
    printf("The sum of %d column is %d\n",j+1,sum);
}
return 0;

}