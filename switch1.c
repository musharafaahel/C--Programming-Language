#include<stdio.h>
#include<conio.h>
int main() {
    int n;
    printf("Enter a number between 1 to 7 :");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday\n");
        break;
    case 5:
        printf("Thursday\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    case 7:
        printf("Saturday\n");
        break;
    
    default:
        printf("Invalid Number");
        break;
    }
    return 0;
}