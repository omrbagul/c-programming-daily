/*
#include<string.h>

functions: USING FUN() AND Myfun

strlen() = gives length of string - DONE 2
strcpy() = copies string to another string - DONE 2
strcmp() = compare two strings - DONE 1
strstr() = search substring in string - DONE 1
*/

#include<stdio.h>
#include<string.h>
#define LEN 40


int main(void)
{                 //0  1  2  3  4
    //int arr[5] = {1, 2, 3, 4, 5};
        //src[40]
    char src[LEN], dest[LEN], *ptr = NULL;
    int ans;
    printf("\n Enter src=");
    scanf("%s", src);

    printf("\n Enter dest=");
    scanf("%s", dest);

    ans =  strcmp(src, dest);

    if( ans > 0)
        printf("%s src is bigger than dest %s", src, dest);

    else if (ans==0)
        printf("%s src is equal to %s",src, dest);  
        
    else 
        printf("%s src is smaller than dest %s", src, dest);
    
     return 0;

}
