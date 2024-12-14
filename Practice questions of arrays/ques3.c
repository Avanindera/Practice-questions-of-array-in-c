#include<stdio.h>
int main(){
//Find maximum and minimum element of array

int a[5]={24,4,5,7,54};

int max=a[0];
int min=a[0];

for(int i=0;i<5;i++){
    if(a[i]>max){
        max=a[i];
    }
    if(a[i]<min)
    min=a[i];
}

printf("The maximum element of array is %d",max);
printf("\nThe minimum element of array is %d",min);

return 0;
}