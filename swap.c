#include<stdio.h>
int main (){
      int a,b,t;
      printf("enter the two values:");
      scanf("%d %d" , &a ,&b);
      t=a;
      a=b;
      b=t;
      printf("the values are %d %d \n", a,b);
      return 0;
    }
