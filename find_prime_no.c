#include<stdio.h>
#include<conio.h>
int main() {
    int num,i;
    printf("Enter the number to check prime or not : ");
    scanf("%d",&num);

    for( i = 2; i <= num-1; i++)
    {
        if(num%i==0)
        {
            printf("Given number %d is not prime number ",num);
            break;
        }
    }

    if(i==num)
        printf("Given number is prime number");
    return 0;
}