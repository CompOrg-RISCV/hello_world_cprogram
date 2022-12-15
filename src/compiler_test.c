#include "stdio.h"
#include "string.h"


int main() {
    uint32_t number = 20;

    printf("Input the number of Hello Worlds to print: ");
    scanf("%d", &number);

    for (uint32_t i = 0; i < number; i++) {

        // printf will be used to validate syscall properly implemented for non-halt syscalls
        printf ("Hello World, %u \n",i+1);
    }
}
