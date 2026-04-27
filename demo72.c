#include<stdio.h>
int main(void)
{
    int i=10; // variable
    //int *pi=NULL;
    //pi=&i;
    // or
    int *pi=&i; // pointer
   //                                i=10  *(1000)=10 *1000=10
    printf("\n i=%d *(&i)=%d *pi=%d", i , *(&i) ,     *pi );
    //                              1000  1000  2000
    printf("\n &i=%u  pi=%u  &pi=%u", &i , pi,  &pi);

    *pi=20;
   //                                i=20  *(1000)=20 *1000=20
    printf("\n i=%d *(&i)=%d *pi=%d", i , *(&i) ,     *pi );
    //                              1000  1000  2000
    printf("\n &i=%u  pi=%u  &pi=%u", &i , pi,  &pi);
 
    printf("\n size of pi=%d", sizeof(pi)); // 8 bytes on  64 bit os
    return 0;
}