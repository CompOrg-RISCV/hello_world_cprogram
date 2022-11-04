#include "stdio.h"
#include "string.h"


int main() {

    for (uint32_t i = 0; i < 20; i++) {

        // printf will be used to validate syscall properly implemented for non-halt syscalls
        printf ("Hello World, %u \n",i+1);
    }

}
