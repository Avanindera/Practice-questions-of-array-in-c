#include<stdio.h>
int main(){

//copy elements from one 1D array to another

int a[5]={1,2,3,4,5};

int b[5];

for(int i=0;i<5;i++){
    b[i]=a[i];


}

printf("The new array is:");

for(int i=0;i<5;i++){
    printf(" %d",b[i]);
}

return 0;
}