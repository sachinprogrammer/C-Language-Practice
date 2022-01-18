#include<stdio.h>
int main()
{
    int num,rem,reverse=0,k;
    printf("Enter any number : ");
    scanf("%d",&num);
    k=num;

while(num>0){
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
    }

    if(k==reverse)
        {
            printf("%d is a palindrome",k);
        }
    else{
        printf("%d is not a palindrome");
    }

    return 0;
}