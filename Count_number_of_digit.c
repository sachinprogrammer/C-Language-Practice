#include<stdio.h>

int main()
{
    int num,count=0,k;

    printf("Enter any number to count number of digit : ");
    scanf("%d",&num);
    k=num;
                                
    while(num>=1){
        num=num/10;
        count++;
    }
    printf("Number of digit in %d is %d",k,count);

    return 0;
}