#include<stdio.h>

int main()
{
    int n,i;

    printf("Enter any number : ");
    scanf("%d",&n);
    i=1;
    do
        {
            if(i%2!=0)
                {
                    printf("%d\n",i);
                }
        i++;

        }while(i<=n);
    return 0;
}