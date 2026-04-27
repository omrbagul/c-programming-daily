
//2. for ---> if we know how many times we want to execute loop.

#include<stdio.h>
int main(void)
{
    int no, counter;
    printf("Enter no=");
    scanf("%d", &no);
    counter=1;
    
    for(;;)  
    {                                               
        printf("%5d",counter); 
        counter++;

        if(counter>no)
        break;
    }
    printf("\nEnd of Program\n");
   return 0;
}