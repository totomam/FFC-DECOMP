#include "ffc/types.h"

extern void func_0206cdd4(void);
extern uint32_t func_0208d8c8(void (*f)(void));

void func_0206cd88(uint8_t *p) {
    *(uint32_t *)(p + 0x30b0) = 3;
    *(uint32_t *)(p + 0x31b8) = 0;
    *(uint8_t *)(p + 0x30b4) = 0;
    *(uint8_t *)(p + 0x30b5) = 0;
    *(uint8_t *)(p + 0x30b6) = 0;
    *(uint8_t *)(p + 0xf92) = 0;
    {
        uint8_t *q = *(uint8_t **)(p + 0x3220);
        q[2] = 1;
    }
    if (func_0208d8c8(func_0206cdd4) != 2) {
        *(uint32_t *)(p + 0x30b0) = 2;
        *(uint8_t *)(p + 0x30b4) = 1;
    }
}
