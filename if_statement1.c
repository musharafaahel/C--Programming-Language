//Program to understand if condition

#include<stdio.h>
#include<conio.h>

int main() {
    int marks;
    printf("Enter the marks : ");
    scanf("%d",&marks); // taking marks as input
    
    if(marks < 40)
        printf("F");
    if(marks >= 40)
        printf("P");
    if(marks >= 50)
        printf("C");
    if(marks >= 60)
        printf("C+");
    if(marks >= 70)
        printf("B");
    if(marks >= 80)
        printf("A");
    if(marks >= 90)
        printf("S");
    return 0;
}