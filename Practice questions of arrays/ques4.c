#include<stdio.h>
int main(){

//Reverse the element in 1d array

int a[5]={1,2,3,4,5};

int b[5];

for(int i=0;i<5;i++){
    b[i]=a[4-i];


}

printf("The reversed array is:");

for(int i=0;i<5;i++){
    printf(" %d",b[i]);
}

return 0;
}