//practical -1 
#include <stdio.h>

int main(void) {
  int num;
  int a [10] ;
  printf("Enter the number");
  scanf("%d",&num);
  printf("enter elements in array");
  for(int i=0;i<num;i++){
    scanf("%d",&a[i]);
  }
  int max=a[0],min=a[0];
  for(int i=1;i<num;i++){
    if(a[i]>max){
      max =a[i];
    }
    if(min>a[i]){
      min=a[i];
    }
  }
  printf("the max value of array is %d \n",max);
  printf("the min value of array is %d",min);
  }


