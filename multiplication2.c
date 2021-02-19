#include<stdio.h>
#include<conio.h>
int main() {
    int num;
    printf("Enter the multiplier number :");
    scanf("%d",&num);
    int i = 1;
    while(i <= 10)
    {
        printf("%d * %d = %d \n",i,num,num*i);
        
        i = i + 1;
    }
    return 0;
}