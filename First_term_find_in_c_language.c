#include<stdio.h>
int main()
{
    int num;

    printf("Enter any number for finding first term : ");
    scanf("%d",&num);

    while(num>9){
        num=num/10;
    }
    printf("First term is %d",num);

    return 0;
}