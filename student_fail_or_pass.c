#include<stdio.h>

int main()
{
    int sub1, sub2, sub3;

    printf("Enter Marks of subjest 1st : ");
    scanf("%d",&sub1);

    printf("Enter Marks of subjest 2nd : ");
    scanf("%d",&sub2);

    printf("Enter Marks of subjest 3rd : ");
    scanf("%d",&sub3);

    if(sub1+sub2+sub3>=120){

        if(sub1>=33 && sub2>=33 && sub3>=33){
            printf("student is pass");
        }
        else{
            printf("Student is fail");
        }
    }

    return 0;
}