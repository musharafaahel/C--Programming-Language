#include<stdio.h>
#include<conio.h>
int main() {
    int age, income;
    char gender;
    printf("Enter your Age, income and Gender(m or f only) : ");
    scanf("%d %d %c",&age, &income, &gender);

    if(age >= 18 && age <= 60)
    {
        if((gender == 'm' || gender == 'M') && (income >= 25000))
            printf("ELIGIBLE");
        else if((gender == 'f' || gender == 'F') && (income >= 20000))
            printf("ELIGIBLE");
        else
            printf("NOT ELIGIBLE");
    }
    else
    {
        printf("NOT ELIGIBLE");
    }
return 0;
}