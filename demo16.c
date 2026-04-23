#include<stdio.h>
int main(void)
{       
    int a = -10, b = 3, c = 0, d;
    // left to right logical expression 
    // -10+1=-9
//------->>>>-------->>>>>>>>>

//       -9 or  3+1=4       0+1=1    
     // T
    //  -9    
    d = a++ || ++b    &&    c++ ;
                                  //-9  3   0 1
    printf("a=%d, b=%d, c=%d, d=%d", a, b, c, d);

    return 0;
}

/*
|| Logical OR   //Sigle true true
&& Logical AND  //Both true then true


a=3, b= 4

       T
    T    F
//4>3 or 4<3
(b>a || b<a)


        T
    T      T
//4>3 or 3<4
(b>a && a<b)
*/