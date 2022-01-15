#include<stdio.h>

int main()
{
    int a;

    printf("Enter any number for check divisibility : ");
    scanf("%d",&a);

    if(a%97==0)
        printf("Your number is divisible by 97 ");
    else
        printf("Your number is not divisible by 97");
    return 0;
}