/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
extern uint8_t data_020ad80c[];
extern int func_02022fb4();
extern void func_020849f4(int a, void *b, int c);
extern void func_020903cc(void *p, int v, int n);
#define W(o) (*(uint32_t*)(p+(o)))
#define H(o) (*(uint16_t*)(p+(o)))
#define B(o) (*(uint8_t*)(p+(o)))
void *func_02023800(void *obj) {
    uint8_t *p = (uint8_t*)obj;
    W(0) = (uint32_t)data_020ad80c;
    W(0x10) = 5; W(0x14) = 0xf; W(0x1c) = 0x1f; W(0x20) = 0x3000;
    H(0x24) = 0x5ef7; H(0x26) = 0x2108;
    B(0x2c) = 0; B(0x2d) = 0; B(0x34) = 0;
    W(0xe0) = 0; W(0xe4) = 0; W(0xe8) = 0; W(0xec) = 0; W(0xf0) = 0;
    W(0xc) = 1; W(0x18) = 0; H(0x28) = 0x7fff; H(0x2a) = 0; W(0x30) = 0;
    W(0x190) = 0; { uint8_t *q = p+0x194; W(0x194) = 0; ((uint32_t*)q)[1] = 0; ((uint32_t*)q)[2] = (uint32_t)(q+4); }
    W(0x2d4) = 0; W(0x2d8) = 0; W(0x2dc) = 0; W(0x2e0) = 0;
    W(0x5c) = 0x1000; W(0x58) = 0x1000; W(0x54) = 0x1000; W(0x38) = 0x1000;
    W(0x44) = 0; W(0x40) = 0; W(0x3c) = 0; W(0x50) = 0; W(0x4c) = 0; W(0x48) = 0;
    W(0x180) = 0; W(0x184) = 1; H(0x188) = 0x7fff; W(0x18c) = 0;
    B(0xdc) = 0; W(0xd0) = 0; B(0x1d2) = 0;
    W(0x1a0) = 0; W(0x1a4) = 0; W(0x1ac) = 0;
    W(8) = 0; W(0x178) = 0;
    int n = 12; int r = func_02022fb4();
    func_020849f4(r, p+0x1c0, n);
    B(0x1d0) = 0;
    func_020903cc(p+0x1d3, 0, n + 0xf4);
    return obj;
}
