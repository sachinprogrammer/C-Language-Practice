#include<stdio.h>

int main()
{
    int num,i,sum=0;

    printf("Enter any number : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        if(i%2!=0) 
             sum=sum+i;
    }
    printf("sum of odd number Upto %d is %d ",num,sum);

    return 0;
}