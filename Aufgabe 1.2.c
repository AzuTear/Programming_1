#include <stdio.h>

int main()
{
    printf("Size of char %d\n", sizeof(char)); /* co-domain char are the same as singed and unsigned depens on the machine*/
    printf("Size of unsigned char %d\n", sizeof(unsigned char)); /* unsigned is used for 0 bis + 255 */
    printf("Size of singed char %d\n", sizeof(signed char));/* singed is used for -127 bis +127 same as char*/
    printf("Size of short %d\n", sizeof(short));
    printf("Size of int %d\n", sizeof(int));
    printf("Size of long %d\n", sizeof(long));
    printf("Size of float %d\n", sizeof(float));
    printf("Size of double %d\n", sizeof(double));
    printf("Size of long double %d\n", sizeof(long double));

    /* float, double and long double don't use singed or unsigend because there is no equivalent machine code
    operations for the CPU to execute. So it would be very inefficient to support it*/
}
