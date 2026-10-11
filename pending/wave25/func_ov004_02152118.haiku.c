#include "ffc/types.h"

extern uint32_t func_ov004_021528b0(int32_t v);
extern void func_ov004_02152494(void *o, uint32_t v, uint32_t z);
extern void *func_0209a76c(int32_t size, int32_t align);

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
} Hdr;

typedef struct {
    uint8_t pad[0x10];
    void *ptr;
} Out;

void func_ov004_02152118(Hdr *p, Out *o, uint32_t base, int32_t x) {
    uint8_t buf[4];
    uint8_t *c;
    uint32_t v = func_ov004_021528b0(p->f4 + x - p->f8);
    c = buf;
    c = (uint8_t *)((uint32_t)c - 4);
    buf[0] = 0;
    buf[1] = buf[0];
    c[0] = buf[0];
    func_ov004_02152494(o, v, *(uint32_t *)c);
    o->ptr = func_0209a76c(base - p->f0, 0x18);
}
