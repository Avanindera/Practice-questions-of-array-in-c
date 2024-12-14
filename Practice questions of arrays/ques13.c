#include<stdio.h>
int main(){

//13. Class Marks Analysis:
// Given a 1D array where each element represents the marks of a student in a class, write a program to calculate the class average,
// the highest score, and the lowest score.

float marks[30]={55.5,65,75,33,34,89,68.5,66,45.5,67,98.5,92,24,23,56,78,90.5,86,24,67,72,35,98,99.5,100,88,82,42,97,88.5};
float sum=0;

float min=marks[0],max=marks[0];

for(int i=0;i<30;i++){
    sum+=marks[i];

if(marks[i]>max){
    max=marks[i];
}

if(marks[i]<min){
    min=marks[i];
}
}
printf("The class average =%0.1f",sum/30);
printf("\n The Highest score=%0.1f",max);
printf("\n The lowest score=%0.1f",min);
return 0;
}