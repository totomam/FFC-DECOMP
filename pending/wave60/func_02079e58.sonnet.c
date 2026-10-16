/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
extern void func_0207c908(void *p);
extern void func_0207c914(void *p, int a, int b);
void func_02079e58(uint8_t *p) {
    uint8_t *q = p + 0x1c;
    p[0x2e] = 0;
    p[0x2d] = 0;
    p[0x2f] = 0;
    p[0x40] = 0x7f;
    p[0x41] = 0x7f;
    *(uint16_t *)(p + 0x34) = 0;
    *(uint16_t *)(p + 0x3e) = 0;
    func_0207c908(q);
    func_0207c914(q, 0x7f00, 1);
}
