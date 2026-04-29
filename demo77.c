#include<stdio.h>
int main(void)
{                //0 1  2  3  4 
    int arr[5] = {1, 2, 3, 4, 5};
    int index;

//index < 5 loops condtion false when the index value becomes 5
                //4<5       0 1 2 3 4
    for(index=0; index<5 ; index++)
    {     
        printf("\n %d ", arr[index]); //printf one by one index value 
        //          1      arr[0]
    }
    printf("\n SIZE = %d ", sizeof(arr)); // print the size of array
    
    return 0;
}

//OK now we run this program

//me motivation deta hu ab aise hi pdh 

  // very first time the index value was 0 then
// we r using for loop