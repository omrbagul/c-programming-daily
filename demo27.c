 /*   four jump statements:
1. break
2. continue
3. return
4. goto
*/

#include<stdio.h>
int main(void)
{
    int age;

    START: //label
    printf("\n Enter Age=");
    scanf("%d", &age);

    if (age>=18)
    {
        printf("\n U can Vote");
        goto END; //go to line 27
    }
    else
    {
        printf("\n U can not Vote");
        goto START;  //go to line 13
    }
    END:
    printf("\n End of prog");
    return 0;
}

