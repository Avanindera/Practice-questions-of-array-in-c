#include<stdio.h>
int main(){

// write a program  to search for a specific element in a 1D array(linear search)

int a[5]={1,5,3,4,5};

int n;
printf("Enter the element you want to search:");
scanf("%d",&n);

for(int i=0;i<5;i++){
    if(a[i]==n){
        printf("%d is found in %d position\n",n,i);
     
    }
}
return 0;
}