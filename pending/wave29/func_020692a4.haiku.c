#include "ffc/types.h"

typedef void (*VFunc)(void *self, int arg);

void func_020692a4(void *self)
{
    uint32_t zero = 0;
    if (((uint8_t *)self)[0x84] != 0) {
        ((uint8_t *)self)[0x84] = (uint8_t)zero;
        (*(VFunc **)self)[8](self, 0);
        if (((uint8_t *)self)[0x85] != 0) {
            ((uint8_t *)self)[0x85] = (uint8_t)zero;
            (*(VFunc **)self)[7](self, (int)zero);
        }
    }
}
