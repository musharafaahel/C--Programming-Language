#include<stdio.h>
#include<conio.h>
int main() {
    int phy, chem, maths;
    printf("Enter your marks in Physics, Chemistry and Maths : ");
    scanf("%d %d %d",&phy,&chem,&maths);

    if(phy >= 40 && chem >= 40 && maths >= 40)
    {
        if(phy >= 80 && chem >= 80)
        {
            printf("You are eligible for scholarship");
        }
        else if(phy >= 80 && maths >= 80)
        {
            printf("You are eligible for scholarship");
        }
        else if(chem >= 80 && maths >= 80)
        {
            printf("You are eligible for scholarship");
        }
        else
        {
            printf("You are not eligible");
        }
    }
    else
    {
        printf("You are not eligible for scholarship");
    }
    return 0;
}