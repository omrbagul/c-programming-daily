#include<stdio.h>
#define SIZE 5 //macro


int main(void)
{       //arr[5]
    int arr[SIZE], index;

    printf("\n Enter elements of array =\n");
    
    for( index=0; index < SIZE ; index++)
    {
        printf("\n arr[%d]=", index);              // arr[0] arr[1]
        scanf("%d", &arr[index]);      //takes input   10       20
    }
    
    printf("\n Elements of array = \n");
    for(index=0; index<SIZE ; index++)
    {
        printf("\n arr[%d] %5d [%u]", index, arr[index], &arr[index]);
    }
    
    printf("\n No of elements in array=%d", SIZE);
    printf("\n size of elements in array in bytes=%d\n", sizeof(arr));

    printf("\n arr=%u &arr=%u &arr[0]=%u", arr, &arr, &arr[0]);
    printf("\n arr+1=%u &arr+1=%u &arr[0]+1= %u", arr+1, &arr+1, &arr[0]+1);

    printf("\n*arr=%d", *arr);

    return 0;
}