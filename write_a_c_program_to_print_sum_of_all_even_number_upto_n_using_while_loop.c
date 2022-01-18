#include<stdio.h>

int main()
{
    int num,i,sum=0;

    printf("Enter any number : ");
    scanf("%d",&num);
    i=1;
    while(i<=num){
        if(i%2==0) 
             sum=sum+i;
        i++;
    }
    printf("sum of even number Upto %d is %d ",num,sum);

    return 0;
}