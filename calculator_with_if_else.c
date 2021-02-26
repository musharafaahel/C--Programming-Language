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

    if(op == '+')
    {
        result = a + b;
    }
    else if(op == '-')
    {
        result = a - b;
    }
    else if(op == '*')
    {
       result = a * b;
    }
    else if(op == '/')
    {
        result = a / b;
    }
    else
    {
        printf("Invalid Operator\n");
    }
    printf("The result = %f", result);
    return 0;
}
