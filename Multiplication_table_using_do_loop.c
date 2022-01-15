#include<stdio.h>

int main()
{
        int n,i;

        printf("Enter the any number for printing table : ");
        scanf("%d",&n);

        i=0;
        do{ 
        i++;
            printf("%d * %d = %d\n",n,i,n*i);
        }while(i<10);

    return 0;
}