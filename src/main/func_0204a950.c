#include "ffc/types.h"

uint32_t func_0204a950(uint32_t x) {
    if (x & 0x8000) {
        x &= 0xffff7fff;
    }
    return x;
}
