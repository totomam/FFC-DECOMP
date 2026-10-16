#include "ffc/types.h"
typedef struct { uint32_t a,b,c,d; } S;
extern uint8_t data_020b0c64[];
void func_020572d0(uint8_t *p, S s) {
    p[0x15] = 0;
    p[0x13] = 0;
    p[0x14] = 0;
    *(uint32_t*)(p + 0x30) = 0;
    *(uint32_t*)(p + 0xc) &= ~0xff;
    *(int32_t*)(p + 0x1c) = -1;
    *(int32_t*)(p + 0x24) = -1;
    *(void**)p = data_020b0c64;
    *(uint32_t*)(p + 0x3c) = s.a;
    *(uint32_t*)(p + 0x40) = s.b;
    *(uint32_t*)(p + 0x44) = s.c;
    *(uint32_t*)(p + 0x2c) = 1;
    *(uint32_t*)(p + 0x48) = s.d;
    p[0x15] = 1;
}
