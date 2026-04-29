// demo of strlen fun
#include<stdio.h>
#include<string.h>
    
size_t mystrlen(const char* s);
#define LEN 40
int main(void)
{
    char src[LEN];
    size_t ans;  // size_t is typdef for unsigned int
    printf("\n Enter src=");
    //scanf("%s", src);
    gets(src);

    ans= strlen(src);//  strlen is build in fun
    printf("\n len of %s  is %d string.h", src, ans);

    ans= mystrlen(src);//  mystrlen
    printf("\n len of %s  is %d using mystrlen fun", src, ans);
    return 0;
}
size_t mystrlen(const char* s)
{
    /*
    // way1 using while loop
    size_t index;
    index=0;
    // pointer notation      array notation
    while(*(s+index)!='\0') //while(s[index]!='\0')
    {
        index++;
    }
    return index;
    */

    /*
    // way2 using for loop
    size_t index;
    for(index=0; s[index]!='\0' ; index++)
    {
    }
    */
    // way3 using for loop
    size_t index;
    for(index=0; *(s+index)!='\0' ; index++)
    ;
    return index;
}// s[index]==*(s+index) == *(index+s) == index[s]

