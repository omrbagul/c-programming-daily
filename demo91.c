#include<stdio.h>
#include<string.h>  //strlen()  strcpy()
#define LEN 40

char* mystrcpy(char *d, const char *s);

int main(void)
{
    char src[LEN] , dest[LEN] , *ptr = NULL ;
    size_t ans;

    printf("\n Enter src=");
    scanf("%s", src);

    printf("\n Enter dest=");
    scanf("%s", dest);

    ptr = strcpy(dest, src);  // dest=src
    printf("\n ans way1 = %s string.h", ptr) ; //using return value
    printf("\n ans way2 = %s string.h ", dest) ; //using  1st arg dest

    ptr = mystrcpy(dest, src); // dest=src
    printf("\n ans way1 = %s myfun", ptr) ; //using return value
    printf("\n ans way2 = %s myfun ", dest) ; //using  1st arg dest

    
    return 0;
}

char* mystrcpy(char *d, const char *s)
{

    size_t index;
    index = 0;
                                        // false
    //s[index] //a n a s \0  index= 0 1 2 3 4
              //0 1 2 3 4           a n a s

    while( *(s+index) != '\0') //s[index] != '\0'
    {
        //d[index]    //s[index] 
        *(d+index) = *(s+index); //char of s is copied in d
        //  a    n    a    s        a     n   a    s
        //d[0] d[1] d[2] d[3]  = //s[0] s[1] s[2] s[3]
        index++;
    }
     // d[index] //d[4] = '\0'
    *(d+index) = '\0';
        //  0 1 2 3 4
   // d =  a n a s \0
    return d;

}

/*
string= array of character termionated by '\0'
0 1 2 3 4  
a n a s \0

strlen[3] don't consider \0
sizeof = 4
sizeof = 4
*/