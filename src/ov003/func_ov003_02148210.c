#include "ffc/types.h"

extern void func_ov003_02155adc(void *p);
extern void *func_ov003_02155b40(void *p);
extern void func_ov003_02155c90(void *p, uint8_t v);
extern void func_ov003_02155bf0(void *p, uint8_t v);

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint8_t pad[8];
    Pair pr;
} Obj;

typedef struct {
    uint8_t a;
    uint8_t b[3];
    uint8_t c;
    uint8_t d[3];
} S;

void func_ov003_02148210(void *r0, uint16_t r1, Pair *r2, uint16_t r3, S s)
{
    Obj *w;
    Pair *pr;
    func_ov003_02155adc(r0);
    *(uint16_t *)func_ov003_02155b40(r0) = r1;
    w = func_ov003_02155b40(r0);
    pr = &w->pr;
    pr->a = r2->a;
    pr->b = r2->b;
    *(uint16_t *)((uint8_t *)func_ov003_02155b40(r0) + 0x10) = r3;
    func_ov003_02155c90(r0, s.a);
    func_ov003_02155bf0(r0, s.c);
}
