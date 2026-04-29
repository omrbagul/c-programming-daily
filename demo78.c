#include<stdio.h>

int main(void)
{
    int arr[5];
    int index;

    printf("Enter 5 Nos=\n");

    for(index=0 ; index < 5 ; index++)
    {
        scanf("%d", &arr[index]);
    }
    
    printf("\n_________________\n");

      for(index=0 ; index < 5 ; index++)
    {
        printf("%d\n", arr[index]);
    }

    return 0;
}