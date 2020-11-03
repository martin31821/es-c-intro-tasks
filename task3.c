#include <stdint.h>
#include <stdio.h>

#include "common.h"

uint32_t process_int(uint32_t in) {
    // TODO: Add implementation here
    return in;
}

uint8_t count_leading_zeros(uint64_t in) {
    return 0;
}

int main(void) {
    uint32_t t1 = 0x80;
    uint32_t t2 = 0x40;

    if (process_int(t1) != (t1 | 0xF8)) {
        printf(RED "Error: expected 0xF8 as output value\n" CLEAR);
        return 1;
    }

    if (process_int(t2) != (~t2 & ~(1 << 12))) {
        printf(RED "Error: Expected inverted value with deleted bit 12" CLEAR);
        return 2;
    }

    if (count_leading_zeros(0x3232) != 50) {
        printf(RED "Error: Expected 50 leading zeros for 0x3232" CLEAR);
    }

    printf(GREEN "Test passed! :) \n" CLEAR);
    return 0;
}