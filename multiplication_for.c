#include<stdio.h>
#include<conio.h>
int main() {
    int i,j;
    for(i = 1; i<=10;i++) //row
    {
        for (j = 1; j <= 10; j++) //column
        {
            printf("%d * %d = %d \n",i,j, i*j );
        }
        printf("\n");
    }
    return 0;
}