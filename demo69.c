/*
print 1 to 10 without using any loops
dont use print 10 times or dont use % 10 times

hint--> use recursion with storage class ( global or static )
*/
#include<stdio.h>

void fun()
{
    static int i=1;
    if( i>10)
        return;
    else 
    {
        printf("\n %d]i=%4d [%u]", i, &i);
        i++;
        
        fun();
    }
}
int main(void)
{
    fun();
    return 0;
}