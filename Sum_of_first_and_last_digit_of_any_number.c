#include<stdio.h>
int main(){

    int num,sum,last;

    printf("Enter any number : ");
    scanf("%d",&num);

    last=num%10;

    while(num>9){
            num=num/10;
    }
    sum=last+num;
    printf("Sum of first and last term is : %d",sum);

    return 0;
}