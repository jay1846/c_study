#include <stdio.h>

int main(void){

    char *p = "HelloWorld";             // "HelloWorld" stored in text segment
                                        // pointer variable stored in data segment
    printf("%s \n", p);

    p = "Welcome to C World!";
    printf("%s \n", p);

    p = "Goodbye";
    printf("%s \n", p);

    // p[0] = 'a';      -> Error

    return 0;
}

/* compiling procedure
1. in text segment area (read-only data area) h,e,l,l,o,w,o,r,l,d,\0 is stored
2. Determines the memory address (e.g. 0x400500) that starts with these letters.
3. Replace the entire word "HelloWorld" on the code with the address value (0x400500)
char *p = "HelloWorld" is meaningly equal as char *p = 0x400500
*/