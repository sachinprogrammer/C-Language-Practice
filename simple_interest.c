#include<stdio.h>

int main()
{
     int p, rate,year;
     float simpleint;
     printf("Enter p, rate, year : ");
     Scanf("%d%d%d",&p,&rate,&year);

     simpleint = ( p * rate * year ) / 100;
     printf("%f", simpleint); 

    return 0;
}