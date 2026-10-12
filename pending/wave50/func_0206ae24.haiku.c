#include "ffc/types.h"

typedef volatile uint16_t vu16;

extern void func_020847b0(void *a);
extern void func_020849c4(void *a, void *b, uint32_t c);
extern void func_02084924(void *a, void *b, uint32_t c);
extern void func_02084968(void *a, void *b, uint32_t c);

typedef struct {
    uint8_t pad[0x24];
    void *f24;
    uint8_t *f28;
    uint32_t f2c;
    uint32_t f30;
} S;

void func_0206ae24(S *p) {
    vu16 *ime = (vu16 *)0x4000208;
    volatile uint8_t flag;
    uint8_t t = 0;
    uint16_t old = *ime;
    *ime = 0;
    if (old != 0) {
        t = 1;
    }
    flag = t;
    func_020847b0(p->f24);
    if (p->f28 != 0) {
        uint32_t n;
        func_020849c4(p->f28, p->f28 + p->f30 * 0xc0, p->f30);
        func_020849c4(p->f28, (void *)p->f2c, p->f30);
        n = p->f30;
        if (!(n & 3)) {
            func_02084924(p->f24, p->f28 + n, p->f2c);
        } else {
            func_02084968(p->f24, p->f28 + n, p->f2c);
        }
    }
    {
        uint16_t dummy = *ime;
        (void)dummy;
    }
    *ime = flag;
}
