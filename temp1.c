//how to print garbage value from the malloc function
#include<stdio.h>
#include<stdlib.h> //malloc()

int main(void)
{
    int *ptr = (int *) malloc(sizeof(int));

    if(ptr == NULL)
     return 0;

    printf("Garbage Value = %d\n", *ptr);// uninitialized

    free(ptr);
    
    return 0;

}