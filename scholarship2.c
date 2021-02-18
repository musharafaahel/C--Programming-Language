#include<stdio.h>
#include<conio.h>
int main() {
    int phy, chem, maths;
    printf("Enter your marks in Physics, Chemistry and Maths : ");
    scanf("%d %d %d",&phy,&chem,&maths);

    if((phy >= 40 && phy <= 100) || (chem >= 40 && chem <= 100) || (maths >= 40 && maths <= 100))
    {
        if((phy >= 80 && chem >= 80) || (phy >= 80 && maths >= 80) || (chem >= 80 && maths >= 80))
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