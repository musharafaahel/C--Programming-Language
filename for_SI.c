#include<stdio.h>
#include<conio.h>
int main() {
    int p ,t;
    float r, SI;
    

    for(int i = 0; i < 3; i++)
    {
        printf("Enter the p, t, r :\n");
        scanf("%d %d %f",&p,&t,&r);
        SI = (p*t*r)/100;
        printf("Simple Interest = %f \n",SI);
    }
    return 0;
}