#include<stdio.h>
int main(){
//declare,initialize and print 1d array

int a[5]={1,2,3,4,5};

printf("The elements of array are:");

for(int i=0;i<5;i++){
    printf(" %d",a[i]);
}
return 0;
}