#include<stdio.h>

int main()
{
    int num,i,sum=0;

    printf("Enter any number : ");
    scanf("%d",&num);
    i=1;
   do{
        sum=sum+i;
        i++;
    } while(i<=num);
    printf("sum of natural number Upto %d is %d ",num,sum);

    return 0;
}