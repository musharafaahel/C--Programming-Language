//Program to calculate simple interest

#include<stdio.h>
#include<conio.h>

int main() {
  float p, t, r;  //stores principal, time & rate
  float SI;
  printf("Enter P , T and R :");
  scanf("%f %f %f", &p, &t, &r);
  
  SI = (p*t*r)/100;

  printf("Simple Interest = %f", SI);
  return 0;
}