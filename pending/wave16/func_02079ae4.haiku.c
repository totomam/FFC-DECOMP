#include "ffc/types.h"

extern void func_02089bf8(uint8_t a, uint32_t b, int16_t c);
extern int16_t data_020a5d80[];

void func_02079ae4(void **p, uint32_t b, uint32_t idx)
{
    if (*(void *volatile *)p) {
        func_02089bf8(*(uint8_t *)((char *)*p + 0x3c), b, data_020a5d80[idx]);
    }
}
