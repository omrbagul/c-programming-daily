//pointer

#include<stdio.h>
int main(void)
{
    int z=10; //variable
        //100

    int *z_ptr=NULL;  //NULL=(void*) 0

    z_ptr=&z; //100 //init at time of decl
    //or

    //*z_ptr; //not good practice;
    printf("\n z=%d *(&z)=%u *z_ptr=%d", z, *(&z) , *z_ptr); 

    printf("\n&z=%u  z_ptr=%u &z_ptr=%u", &z, z_ptr, &z_ptr);

    printf("\n sizeof(z_ptr)=%d\n", sizeof(z_ptr));

    *z_ptr=5;
                                        // 5 *(1000)=5 *(1000)=5    
    printf("\n z=%d *(&z)=%u *z_ptr=%d", z, *(&z) , *z_ptr); // z=5 *(&z)=5  *z_ptr=5

    printf("\n&z=%u  z_ptr=%u &z_ptr=%u", &z, z_ptr, &z_ptr);

    printf("\n sizeof(z_ptr)=%d\n", sizeof(z_ptr));
    
    return 0;
}