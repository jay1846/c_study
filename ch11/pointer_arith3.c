/**
 * @file memory_inspection.c
 * @brief Understanding Endianness and Pointer Casting
 * * Key Concepts:
 * 1. (char *)&data: Treats the address of an int as a sequence of bytes.
 * 2. *(pc + i): Moves 1 byte at a time to inspect the memory content.
<<<<<<< HEAD
 * 3. Little-Endian: The least significant byte (0x0D) is stored at the lowest address.
=======
>>>>>>> a673ad4a414acc2c6515e206b5351cc2555a7249
 */
#include <stdio.h>

int main(void){
    int data = 0x0A0B0C0D;
    char *pc;
    int i;

    pc = (char *)&data;
    for(i = 0; i < 4; i++){
        printf("*(pc + %d) = %02X \n", i, *(pc + i));
    }

    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> a673ad4a414acc2c6515e206b5351cc2555a7249
