/*in c prog we can use malloc, calloc and realloc function to
                     =========================== 
allocate memory dynamically.
these function are declare in stdlib.h

when malloc()/calloc()/realloc() allocates it is allocated in the heap or extra segmement

this dyanmaically allocted memory should be free using free() function
                                                       ====

if  malloc fails to allocate it returns NULL. (void*)0 

what is the return type of malloc?
or
how malloc can allocate memory for any data type?
return type of malloc is void pointer
so it can allocate memory for any data type but we have
to to type that void pointer with that data type pointer for which
we allocate memory dyanmically.

when we allocate memory with it allocate with garbage value

valgrind is tool to check memory leakage ( it is there on linux/mac)
it is not present on windows
*/
// allocate a memory for single int using malloc fun

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *ptr=NULL; //0
    ptr = (int *)  malloc (1*sizeof(int));

    if(ptr ==NULL)
        printf("\n unable to allocate memory");
    else 
    {   
        printf("\n *ptr=%d", *ptr);
        printf("\n Enter *ptr = ");
        scanf("%d", ptr);  // ptr store address
        printf("\n *ptr=%d", *ptr);
        free(ptr);
        ptr=NULL;
        printf("\n memory freed");
    }
    return 0;
}
