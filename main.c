#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int a[10], i;
  a[0]= 0;
  srand(time(NULL));
  for(i = 1; i < 10; i++){
    a[i]= rand();
  }
  printf("A: ");
  for(int i =0; i < 10; i++){
    if(i != 9)
      printf("%d, ",a[i]);
    else
      printf("%d\n",a[i]);
  }
  int arr[10];
  int *ap = a;
  int *arrp = arr;
  for(int i =0; i < 10; i++){
    arrp[i] = a[9-i];
    if(i != 9)
      printf("%d, ",arrp[i]);
    else
      printf("%d", arrp[i]);
  }
  return 0;
}
