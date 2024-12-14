#include<stdio.h>
int main(){

//Find the largest and the smallest elements in each row of 2d matrix

int a[3][3]={1,2,3,4,5,6,7,8,9};

for(int i=0;i<3;i++){
    int max=a[i][0],min=a[i][0];
    for(int j=0;j<3;j++){
        if(a[i][j]>max){
            max=a[i][j];
        }

        if(a[i][j]<min){
            min=a[i][j];
        }
    }
    printf("The largest and smallest element of row %d is %d and %d respectively\n",i+1,max,min);
}

return 0;
}