#include<stdio.h>
#include<string.h>  //strlen()  strcpy()
#define LEN 40


int main(void)
{
    char src[LEN] , dest[LEN] , *ptr = NULL ;
    int ans;

    printf("\n Enter src=");
    scanf("%s", src);

    printf("\n Enter dest=");
    scanf("%s", dest);

    ptr = strcpy(dest, src);  // dest=src
    printf("\n ans way1 = %s string.h", ptr) ; //using return value
    printf("\n ans way2 = %s string.h ", dest) ; //using  1st arg dest
    
    return 0;
}