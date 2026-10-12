#include "ffc/types.h"

typedef char *va_list;
#define va_start(ap, last) __va_start(ap, last)

extern void *func_0205681c(uint32_t size);
extern void func_02055110(uint32_t x, void *p);
extern char data_020b0e1c[];
extern uint32_t data_0213e098;

typedef struct { uint32_t w0, w1, w2, w3; } S4;

void func_02059e18(uint32_t *r7, ...)
{
    va_list ap;
    uint32_t *q;
    uint32_t *p;

    va_start(ap, r7);
    q = (uint32_t *)ap;
    p = (uint32_t *)func_0205681c(0x44);
    if (p != 0) {
        p[3] &= ~0xffu;
        p[0] = (uint32_t)data_020b0e1c;
        p[5] = q[0];
        p[6] = q[1];
        p[7] = q[2];
        p[8] = q[3];
        p[9] = q[4];
        p[10] = q[5];
        p[11] = q[6];
        p[12] = r7[1];
        p[13] = r7[9];
        p[14] = q[8];
        p[15] = q[9];
        *(uint16_t *)((char *)p + 0x40) = (uint16_t)((q[11] << 12) | q[10]);
        *(uint16_t *)((char *)p + 0x42) = (uint16_t)((((uint8_t)q[13]) ? 0x800 : 0) | (((uint8_t)q[12]) ? 0x400 : 0));
    }
    func_02055110(data_0213e098, p);
}
