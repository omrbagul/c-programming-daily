#include<stdio.h>

int main(void)
{
    // when we use () last value is assign variable
    int a = (1, 2, 3), b, c;  //a=3
    //when we don't use () 1st value is assign variable
    // 4       5     6
    //3+1    4+1   5+1
    b = ++a, ++a, ++a;
    printf("\na=%d, b=%d", a, b);  //a=6 b=4
    //  4+1 5+1=6  6+1=7
    //   4     5    6
    c = b++,  b++, b++;
    printf("\na=%d, b=%d, c=%d",a, b, c); //a=6 b=7 c=4

    

    return 0;
}