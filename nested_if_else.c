#include<stdio.h>
#include<conio.h>
int main() {
    int marks;
    printf("Enter the marks : ");
    scanf("%d",&marks); // taking marks as input

    if(marks >= 90)
        printf("S");
    else if(marks >= 80)
        printf("A");
    else if(marks >= 70)
        printf("B+");
    else if(marks >= 60)
        printf("B");
    else if(marks >= 50)
        printf("C");
    else if(marks >= 40)
        printf("P");
    else if(marks < 90)
        printf("P");

    return 0;
}