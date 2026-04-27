#include<stdio.h>
int main(void)
{
    int i=10;
    //static int j=i;  error
    // can u init static variables with local variable  at time of decl
   // printf("\n i=%d j=%d", i, j);

    // we can init static variable with constant at time decl
    static int j=20; // allowed
    printf("\n i=%d j=%d", i, j); // i=10 j=20

    j=i;
    printf("\n i=%d j=%d", i, j); // i=10  j=10
    // we can assign local variables to static variable

    static int k; // default static variable have value 0
    printf("\n k=%d", k); // k=0
    return 0;
}
