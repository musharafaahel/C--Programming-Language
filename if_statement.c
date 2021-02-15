//Program to understand if condition

#include<stdio.h>
#include<conio.h>

int main() {
    int marks;
    printf("Enter the marks : ");
    scanf("%d",&marks); // taking marks as input
    
    if(marks >= 40)
        printf("You are pass");
    if(marks < 40)
        printf("You are fail");
    return 0;
}