#include<stdio.h>

int main(void)
{
    int a = 3, b = 6;  // init at time of decl
    printf("\n a=%d b=%d\n", a, b); //a=3  b=6

    {//local block 
        int a,b;  //decl of variable
        printf("\n a=%d b=%d\n", a, b); //garbage value
    }
    a=3;  //assignment a=3, b=6
    
    printf("a=%d, b=%d", a=b, b);  // = assignment op


    return 0;
}