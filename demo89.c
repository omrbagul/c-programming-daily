#include<stdio.h>
#include<string.h>
#define LEN 40

size_t mystrlen(const char  *s);  //typedef unsigned int (size_t)

int main(void)
{
    char src[LEN];
    int ans;

    printf("\n Enter Src=");
    scanf("%s", src); //anas

    ans = strlen(src);
    printf("\n Len of %s is %d  string.h", src, ans);
    ans = mystrlen(src);

    printf("\n len of %s is %d using mystrlen fun", src, ans);

    return 0;
}

size_t mystrlen(const char  *s) 
{
    size_t index; //int index;
    for(index=0 ; *(s+index) != '\0' ; index++) //s[index] != '\0'
    ;

    return index;
}