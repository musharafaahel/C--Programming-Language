#include<stdio.h>
#include<conio.h>
int main() {
    int marks;
    printf("Enter you marks : \n");
    scanf("%d",&marks);

    (marks >= 40 && marks <=100)?printf("PASS"):printf("FAIL");
    return 0;
}