#include<stdio.h>
int main()
{
    int num;

    printf("Enter any number for finding first and last term : ");
    scanf("%d",&num);

    printf("last term id %d\n",num%10);

    while(num>9){
        num=num/10;
    }
    printf("First term is %d",num);

    return 0;
}