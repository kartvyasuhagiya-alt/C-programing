#include<stdio.h>
int main(){
int n,i,sum= 0;
printf("Enter a positive integer:");
scanf("%d", &n);

for (i = 1 ; i<=n ; ++i )
{
  sum += 2*i-1 ;
  }
printf("sum = %d" , sum);
return 0;
}
