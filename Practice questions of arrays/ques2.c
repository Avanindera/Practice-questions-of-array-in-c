#include<stdio.h>
int main(){

//Calculation of sum and avg of 1d array

int a[5]={1,3,5,6,7};
int sum=0;
for(int i=0;i<5;i++){
    sum+=a[i];
}
printf("The sum of the elements of array is %d",sum);
printf("\n The average of elements of array is %0.1f",sum/5.0);
return 0;
}