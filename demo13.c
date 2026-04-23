#include<stdio.h>
int main(void)
{
    int a = (1, 2, 3); //a=3 last value is assigned as ()
    //        4     5    6     
   //        3+1  4+1   5+1
    int b = (++a, ++a, ++a);
    printf("\na=%d, b=%d",a,b);  // a=6  b=6
     //       6+1  7+1 8+1=9
//            6    7   8 
    int c = (b++, b++, b++); 


    printf("\na=%d, b=%d, c=%d", a, b, c); //a=6 b=9, c=8


    return 0;
}