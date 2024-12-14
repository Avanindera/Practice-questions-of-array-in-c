#include<stdio.h>
int main(){

int n,s;

printf("Enter the number of students and number of subjects:");
scanf("%d %d",& n,&s);

int grade[n][s];
int i,j;

for(i=0;i<n;i++){
    for(j=0;j<s;j++){
      printf("Enter the grade of %d student in %d subject",i+1,j+1);  
      scanf("%d",&grade[i][j]);
    }
}
int avg,sum; int avgg[n][s];
for(i=0;i<n;i++){
     sum=0;
    for(j=0;j<s;j++){
        sum=sum+grade[i][j];
    
    }
    avg=sum/s;avgg[i][j]=avg;
    printf("The overall average marks of %d student is %d\n",i+1,avg);
}
int max=avgg[0][0];int t;
for(j=0;j<n;j++){
int max=avgg[0][0];
         for(i=0;i<s;i++){
              if(max<avgg[j][i])
              {
                max=avgg[j][i];
                 t=i;
                        }
                       }
                       printf("The highest average is scored by student %d in %d subject\n",j+1,t+1);

}
return 0;
}