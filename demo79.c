#include<stdio.h>

int main(void)
{

    int arr[5], *ptr, index;
    ptr = arr;
    printf("Enter 5 Elements=");
    
    for(index=0 ; index < 5 ; index++)
    {
        scanf("%d", ptr);
        ptr++;
    }

    ptr=arr;
    
    for(index=0 ; index < 5 ; index++ , ptr++)
    {
        printf("\n%d", *ptr);
    }


    return 0;
}