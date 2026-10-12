#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t v);
extern char data_020b2408[];

uint32_t *func_020727c8(uint32_t *p, uint32_t a1, uint32_t a2, uint32_t a3,
                        uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7,
                        uint32_t a8)
{
    func_02056c9c(p, 0);
    *(void **)p = data_020b2408;
    p[0x20] = a1;
    p[0x21] = a2;
    p[0x22] = a3;
    p[0x23] = a4;
    p[0x24] = a5;
    p[0x25] = a6;
    p[0x26] = a7;
    p[0x27] = a8;
    p[0x28] = 0;
    p[0x29] = 0;
    p[0x2a] = 0;
    return p;
}
