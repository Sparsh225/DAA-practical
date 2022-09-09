//practical -2 
#include <stdio.h>
void insertionsort(int a[],int n){
   for(int i=1;i<n;i++){
     int key=a[i];int j=i-1;
     while(j>=0 && key<a[j]){
       a[j+1]=a[j];
       j--;
     }
     a[j+1]=key;
   }
}
int main(void) {
  int num;
  int a [10] ;
  printf("Enter the number");
  scanf("%d",&num);
  printf("enter elements in array");
  for(int i=0;i<num;i++){
    scanf("%d",&a[i]);
  }
  printf("elements in array before sorting ");
  for(int i=0;i<num;i++){
    printf("%d \t",a[i]);
  }
   printf("\n");
  insertionsort(a,num);
  printf("elements in array after sorting ");
  
   for(int i=0;i<num;i++){
    printf("%d \t",a[i]);
  }

}
