#include "ffc/types.h"

extern void func_ov010_021bd420(void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02053234(void *object);
extern char data_ov010_021d196c[];

void *func_ov010_021bf608(void *p, uint32_t a, uint32_t b, uint32_t c) {
    uint8_t *r5 = (uint8_t *)p;
    uint32_t *q;
    uint8_t *r4;

    func_ov010_021bd420(p, a, b, c, 5);
    *(void **)r5 = data_ov010_021d196c;
    q = (uint32_t *)(r5 + 0x138);
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    r4 = r5 + 0x144;
    func_02053234(r4);
    *(uint32_t *)(r4 + 4) = 0;
    r4[0xc] = 0;
    return p;
}
