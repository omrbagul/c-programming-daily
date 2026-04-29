/*strstr --  search substring in string

	search the first occurrence of the substring in  the string
	if found return starting address in string where it found  the substring 
	and if not found returns NULL.

   char *strstr(const char *string, const char *substring);
 */

#include<stdio.h>
#include<string.h>
//char *mystrstr(const char *s1, const char *s2);
#define LEN 40

int main(void)
{
    char src[LEN], dest[LEN], *ptr=NULL;
 
    printf("\n Enter src=");
    scanf("%s", src);     //anas
    //gets(src);
    printf("\n Enter dest=");
    scanf("%s", dest);  //ana
   // gets(dest);
    //NULL        0123
    //0       //  anas ana
    ptr= strstr(src, dest); //search substring in string
        // 0==NULL
    if(ptr==NULL)
        printf("%s is not found in %s", dest, src);              
    else       //ana          anas    0                    //positon of substring      
        printf("%s is found in %s at %d location", dest, src, ptr-src);

    return 0;
}

/*
 src         dest      dest
a n a s     a n a       a s     
0 1 2 3     0 1 2       2 3    
^
|
ptr 

src -> points here (index 0)

src = address of a 0
ptr = address of a 0 

ptr - src 
 2     0  = 2

____________________________________

src  = "sunbeam"
dest = "beam"


 Index ====>>>0 1 2 3 4 5 6  
              s u n b e a m     
                  ^
ptr = strstr(src, dest) 
ptr = 2

src = address of a s
ptr = address of a b

ptr - src

intrnally (adress level)
1003 - 1000
= 3

 Index ====>>>0 1 2 3 4 5 6  
              s u n b e a m     
                    ^
*/