#include<stdio.h>

int main()
{

    int tincome;
    float k;

    printf("Enter your total income : ");
    scanf("%d",&tincome);
    if(tincome<=250000)
        printf("You are tax free because your income is less than 2.5 lack rupee");

    if(tincome>=250001 && tincome<=500000)
      { 
          k=(tincome-250000)*5/100;
          printf("Your tax value is %f",k);
         }

    if(tincome>=500001 && tincome<=1000000)
      { 
          k=(tincome-500000)*20/100;
          printf("Your tax value is %f",k);
         }

       if(tincome>1000000)
      { 
          k=(tincome-1000000)*30/100;
          printf("Your tax value is %f",k);
         } 


    return 0;
}