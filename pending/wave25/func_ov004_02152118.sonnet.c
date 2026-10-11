#include "ffc/types.h"

extern uint32_t func_ov004_021528b0(void *p, int32_t v);
extern void func_ov004_02152494(void *o, uint32_t v, uint32_t z);
extern void *func_0209a76c(int32_t size, int32_t align);

typedef struct { uint32_t f0, f4, f8; } Hdr;
typedef struct { uint8_t pad[0x10]; void *ptr; } Out;

void func_ov004_02152118(Hdr *p, Out *o, uint32_t base, int32_t x) {
    uint8_t buf[4];
    uint32_t v = func_ov004_021528b0(p, p->f4 + x - p->f8);
    uint32_t addr = (uint32_t)buf;
    uint8_t *a = buf;
    uint8_t t;
    uint8_t *c;
    *a = 0;
    t = *a;
    buf[1] = t;
    c = (uint8_t *)(addr - 4);
    *c = t;
    func_ov004_02152494(o, v, *(uint32_t *)c);
    o->ptr = func_0209a76c(base - p->f0, 0x18);
}
