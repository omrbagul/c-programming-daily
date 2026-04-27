#include<stdio.h>
int main(void)
{
    printf("\n int data type\n");
    {
    int i=10; // variable
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
   //                          1000   1000+1*4 ==1004
    printf("\n pi=%u  pi+1=%u", pi   , pi+1);
    //                          1000   1000-1*4 ==996
    printf("\n pi=%u  pi-1=%u", pi   , pi-1);
  //                            1000  1000+5*4=1020
    printf("\n pi=%u  pi+5=%u", pi   , pi+5);
    //                            1000  1000-5*4=980
    printf("\n pi=%u  pi-5=%u", pi   , pi-5);

    }
    printf("\n=================================\n");
    printf("\n char data type\n");
    {
    char i='A'; // variable
    char *pi=&i; // pointer
   //                                i=A  *(1000)=A *1000=A
    printf("\n i=%c *(&i)=%c *pi=%c", i , *(&i) ,     *pi );
    //                              1000  1000  2000
    printf("\n &i=%u  pi=%u  &pi=%u", &i , pi,  &pi);

    *pi='B';
   //                                i=B  *(1000)=B *1000=B
    printf("\n i=%c *(&i)=%c *pi=%c", i , *(&i) ,     *pi );
    //                              1000  1000  2000
    printf("\n &i=%u  pi=%u  &pi=%u", &i , pi,  &pi);
 
    printf("\n size of pi=%d", sizeof(pi)); // 8 bytes on  64 bit os
   //                          1000   1000+1*1 ==1001
    printf("\n pi=%u  pi+1=%u", pi   , pi+1);
    //                          1000   1000-1*1 ==999
    printf("\n pi=%u  pi-1=%u", pi   , pi-1);
      //                            1000  1000+1*4=1005
    printf("\n pi=%u  pi+5=%u", pi   , pi+5);
    //                            1000  1000-5*1=9995
    printf("\n pi=%u  pi-5=%u", pi   , pi-5);
//demo2_2.c:56:42: error: invalid operands to binary * (have ‘char *’ and ‘int’)
    //printf("\n pi=%u  pi*5=%u", pi   , pi*5);
    //printf("\n pi=%u  pi/5=%u", pi   , pi/5);
    //demo2_2.c:57:42: error: invalid operands to binary / (have ‘char *’ and ‘int’)

    }

    printf("\n short int data type\n");
    {
    short int i=10; // variable
    short int *pi=&i; // pointer
   //                                i=10  *(1000)=10 *1000=10
    printf("\n i=%hd *(&i)=%hd *pi=%hd", i , *(&i) ,     *pi );
    //                              1000  1000  2000
    printf("\n &i=%u  pi=%u  &pi=%u", &i , pi,  &pi);

    *pi=20;
   //                                i=20  *(1000)=20 *1000=20
    printf("\n i=%hd *(&i)=%hd *pi=%hd", i , *(&i) ,     *pi );
    //                              1000  1000  2000
    printf("\n &i=%u  pi=%u  &pi=%u", &i , pi,  &pi);
 
    printf("\n size of pi=%d", sizeof(pi)); // 8 bytes on  64 bit os
   //                          1000   1000+1*2 ==1002
    printf("\n pi=%u  pi+1=%u", pi   , pi+1);
    //                          1000   1000-1*2 ==998
    printf("\n pi=%u  pi-1=%u", pi   , pi-1);
      //                            1000  1000+5*2=1010
    printf("\n pi=%u  pi+5=%u", pi   , pi+5);
    //                            1000  1000-5*2=990
    printf("\n pi=%u  pi-5=%u", pi   , pi-5);

    }
    printf("\n=================================\n");
    printf("\n\n\n\n");
    return 0;
}
/*
pi is pointer
address                  value of pointer
pi+10  allowed           *pi+10  allowed
pi-10  allowed           *pi-10  allowed
pi/10  not allowed       *pi/10  allowed with data
pi*10  not allowed       *pi*10  allowed with data


pi & pj are pointers
pi + pj not allowed       *pi + *pj  allowed
pi * pj not allowed       *pi * *pj  allowed
pi / pj not allowed       *pi / *pj  allowed

pi - pj allowed in array   *pi - *pj  allowed
*/
