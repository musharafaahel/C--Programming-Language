#include<stdio.h>
#include<conio.h>

int main(){
    int phy, chem, maths;
    printf("Enter your marks in Physics, Chemistry, Maths : ");
    scanf("%d %d %d",&phy ,&chem, &maths );

    if(phy >= 40 && chem >= 40 && maths >= 40)
    {
        printf("You are pass\n");
        int marks =(phy + chem + maths)/3;
        
        if(marks >= 90 && marks <= 100)
            printf("Grade : S");
        else if(marks >= 80 && marks <= 90)
            printf("Grade : A+");
        else if(marks >= 70 && marks <= 80)
            printf("Grade : A");
        else if(marks >= 60 && marks <= 70)
            printf("Grade : B+");
        else if(marks >= 50 && marks <= 60)
            printf("Grade : B");
        else if(marks >= 40 && marks <= 50)
            printf("Grade : J (just passed)");
        else
            printf("Please enter a vaild marks");
    }  
    else
        printf("You are fail, hope you learn and pass next time!");
    return 0;
}