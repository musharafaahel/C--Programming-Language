#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main() {
    int a, b; float result;
    char op;
    printf("Enter two numbers : \n");
    scanf("%d %d",&a,&b);
    printf("Enter + or - or * or / :\n");
    scanf(" %c",&op);

    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    
    
    default:
        printf("Invalid Number");
        break;
    }

    
    printf("The result = %f", result);
    return 0;
}