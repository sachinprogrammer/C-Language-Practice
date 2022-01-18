#include<stdio.h>

int main()
{
    int num,i;

    printf("Enter number : ");
    scanf("%d",&num);
    i=1;
    printf("Even number Using do While loop \n");
    do{
        if(i%2==0)
            printf("%d\n",i);
        i++;
    }while(i<num);

    return 0;
}