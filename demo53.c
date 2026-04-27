/*
1. function
    addition
    factorial
    table & table_no
        
storage class 

Nested loops
  triplates
*/

#include<stdio.h>
int addition(int n1, int n2);
int main(void)
{
   int no1, no2, ans;
  printf("Enter No1 and No2=");
  scanf("%d %d", &no1, &no2);
  ans = addition(no1, no2);
  printf("Addition is %d", ans);
  return 0;
}
int addition(int n1, int n2)
{
  int temp=0;
  temp=n1+n2;
  return temp;
}