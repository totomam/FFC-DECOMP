#include "ffc/types.h"

extern void *func_0203b6fc(void);
extern void *func_0203bd04(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_02055a2c(void *p);
extern uint32_t data_020abdd8[];

void *func_ov002_021a4360(uint8_t *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f) {
    void *r6;
    uint8_t *r4;
    uint32_t *p;
    void *v;

    r6 = func_0203b6fc();
    r4 = func_0203bd04(0x10109, 0, 0, 1);
    func_02056bc0(r6, r4);
    p = func_0205681c(0x28);
    if (p != 0) {
        if (r4 != 0) {
            r4 += 0x14;
        }
        p[2] = 0;
        p[3] = 0x10108;
        p[0] = (uint32_t)data_020abdd8;
        p[4] = (uint32_t)r4;
        p[5] = (uint32_t)b;
        p[6] = c;
        p[7] = d;
        p[8] = e;
        p[9] = f;
    }
    v = *(void **)(a + 0xf0);
    v = func_02055a2c(v);
    func_02056bc0(r6, v);
    return r6;
}
