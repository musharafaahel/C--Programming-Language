#include<stdio.h>
#include<conio.h>
int main() {
    int age, income;
    char gender;
    printf("Enter your Age, income and Gender(m or f only) : ");
    scanf("%d %d %c",&age, &income, &gender);

    if(gender == 'm' || gender == 'M')
    {
         if((age >= 18 && age <= 60) && (income > 25000))
         {
             printf("You are eligible for insurance");
         }
         else
         {
             printf("You are not eligble for insurance");
         }
    }
    else if(gender == 'f' || gender == 'F')
    {
         if((age >= 18 && age <= 60) && (income > 20000))
         {
             printf("You are eligible for insurance");
         }
         else
         {
             printf("You are not eligble for insurance");
         }
    }
    else
    {
        printf("You are not eligble for insurance");
    }
   
    return 0;
}