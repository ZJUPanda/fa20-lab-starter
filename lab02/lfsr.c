#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */

    unsigned b0, b2, b3, b5;
    b0 = (*reg) & 1u;
    b2 = (*reg>>2) & 1u;
    b3 = (*reg>>3) & 1u;
    b5 = (*reg>>5) & 1u;
    unsigned shift_in = b0^b2^b3^b5;
    *reg >>= 1;
    *reg |= shift_in<<15;
}

