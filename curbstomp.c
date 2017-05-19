/*
 * 
 * When you absolutely positiviely must disable a Linux machine IMMEDIATELY.
 *
 * Only use this on property for which you have expressed written permission for.
 * Author assumes no liability for any negative outcomes as the result of using this software.
 *
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    setuid( 0 ); 
    system("echo 1 > /proc/sys/kernel/sysrq");
    system("echo b > /proc/sysrq-trigger"); 

    return 0;
 }

