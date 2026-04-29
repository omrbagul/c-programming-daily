/* void pointer
is a genreic pointer which  can store address of any data type variable
but we can not display data using void pointer because we dont know
the scale factor ( size of data type) of void pointer

to display data using void pointer typecast it with that data type pointer
whose address is store in the pointer
*/
#include<stdio.h>
int main(void)
{
    void *ptr=NULL;
    int no1=10;
    float pi=3.142f;
    char ch='A';

    ptr= &no1; // void pointer can store address of int data type no1
   // printf("\n *ptr=%d", *ptr) ; // error demo3.c:15:26: error: invalid use of void expression
    printf("\n *ptr=%d", *(int *)ptr) ; // *ptr=10 //typecast
    return 0;
}
