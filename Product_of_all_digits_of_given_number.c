#include<stdio.h>
int main(){

    int num,product=1,rem;

    printf("Enter any number : ");
    scanf("%d",&num);

    while(num>0){
        rem=num%10;
        product=product*rem;
        num=num/10;
    }
    printf("product of all digits is %d",product);

    return 0;
}