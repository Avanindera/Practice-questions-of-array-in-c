#include<stdio.h>
int main(){

//count the occurance of specific element in 1d array

int a[10]={1,3,4,3,4,3,1,3,5,4};

int n,count=0;
printf("Enter the element for which you want to count the occurence:");
scanf("%d",&n);
 

for(int i=0;i<10;i++){
    if(a[i]==n){
        count++;
    }

}

printf("The occurence of %d in array is %d times",n,count);
return 0;

}
