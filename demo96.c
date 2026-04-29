
// allocate a memory for array of int using malloc fun
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int *ptr=NULL, index, no;
    printf("\n Enter how many elements u want in array =");
    scanf("%d", &no);
    ptr=(int*) malloc(no*sizeof(int));
    if(ptr==NULL)
        printf("\n uable to allocate memroy");
    else 
    {
        
        printf("\n Enter elements of array=\n");
        for(index=0; index<no; index++)
        {
            printf("\n ptr[%d]=",index);
            scanf("%d", &ptr[index]);
        }
        printf("\n Elements of array=\n");
        for(index=0; index<no; index++)
        {
            printf("\n ptr[%d] \t %5d \t [%u]",index, ptr[index], &ptr[index]);
            
        }
        free(ptr);
        ptr=NULL;
        printf("\n memory freed");
    }
    return 0;
}
