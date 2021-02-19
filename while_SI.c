#include<stdio.h>
#include<conio.h>
int main() {
    int p,t,r;
    float SI;
    
    int i = 0; //loop counter

    while (i < 3)
    {
        printf("Enter P, T and R : \n");
        scanf("%d %d %d",&p, &t, &r);
        SI = (p*t*r)/100;
        printf("Simple Interest is %f \n",SI); 
        i = i + 1;
    }
    


    return 0;
}