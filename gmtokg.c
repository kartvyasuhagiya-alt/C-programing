#include<stdio.h>
int main()
{
    int kg,gm;
    printf("enter gm:");
    scanf("%d", &gm);
    kg = 1000/gm;
    printf("%d",kg);
    return 0;
}