#include<stdio.h>
int main(){

    int num,sum=0;

    printf("Enter any number : ");
    scanf("%d",&num);

    while(num>0){
        sum=sum+num%10;
        num=num/10;
    }
    printf("Sum of digit is %d",sum);

    return 0;
}