//practical 1

 #include <stdio.h>
int main(void) {
  int num;
  printf("Enter the number");
  scanf("%d",&num);
  int result=recursive(num);
  printf("result %d",result);
}
int recursive(int num){
  if(num==1){
    return 1;
  }
  return num*recursive(num-1);
}
*/