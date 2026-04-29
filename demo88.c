#include<stdio.h>
#include<string.h>
#define LEN 40


int main(void)
{
    char src[LEN];
    int ans;

    printf("\n Enter Src=");
    scanf("%s", src);


    ans = strlen(src);
    printf("\n Len of %s is %d  string.h", src, ans);


    return 0;
}
