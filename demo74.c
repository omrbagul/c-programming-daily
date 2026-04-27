/*
swap using call by address or call by reference or using pointer  in c
*/
#include<stdio.h>
void swap( int *n1, int *n2); // fun decl
int main(void)
{
    int no1, no2;
    printf("\n Enter No1=");
    scanf("%d", &no1);
    
    printf("\n Enter No2=");
    scanf("%d", &no2);

    printf("\n before swap in main no1=%d[%u] no2=%d [%u]", no1, &no1, no2, &no2);
    swap(&no1, &no2); // funtion call
    // no1, no2 actual arg
    printf("\n after swap in main no1=%d[%u] no2=%d [%u]", no1, &no1, no2, &no2);
    return 0;
}
// fun defination
// n1,n2 formal arguments 
void swap( int *n1, int *n2)
{
    int temp=0;  //                                          10  100  20    104
    printf("\n before swap in swap  *n1=%d[%u] *n2=%d [%u]", *n1, n1, *n2, n2);
    temp=*n1;  // temp=*100;  temp=10  &no1=100
    *n1=*n2;   // *n1=*104;   *100=20
    *n2=temp; // *n2=10   ;   *104=10  &no2=104              20  100  10  104 
    printf("\n after swap in swap  *n1=%d[%u] *n2=%d [%u]", *n1, n1, *n2, n2); 
    return;
}
