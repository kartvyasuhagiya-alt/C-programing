#include<stdio.h>
int main()
{
  int numbers[5];
  int i;
  printf("enter 5 integer value:\n");
  for (i=0; i<5; i++){
  printf("enter value %d:", i+1);
  scanf("%d", &numbers[i]);
  }
  printf("\n thevalues you entered are;\n");

  for(i=0;i<5;i++){
  printf("value %d: %d\n", i+1, numbers[i]);
  }
  return 0;
  }































