#include<stdio.h>
#include<conio.h>
int main() {
    int marks;
    printf("Enter the marks : ");
    scanf("%d",&marks); // taking marks as input

    if(marks < 40)
        printf("Fail");
    else
        printf("Pass");
    return 0;
}