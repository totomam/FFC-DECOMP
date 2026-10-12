#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov008_0219a238(void *p);
extern void func_ov005_02196144(void *obj, uint32_t v);
extern void func_ov008_0219a290(void *p);
extern void func_02069828(void *p, uint32_t a, uint32_t b);

typedef struct {
    void *f0;
    void *f1;
    void *f2;
    void *f3;
    void (*f4)(Pair *out, void *self);
} VTable;

int func_ov008_0219a168(void *self)
{
    uint8_t *s = (uint8_t *)self;
    Pair tmp;
    void *obj;
    void *obj2;
    VTable *vt;
    uint64_t r;

    r = func_0209a76c(s[0x140] + 1, s[0x141] + 1);
    s[0x140] = (uint8_t)(r >> 32);
    func_ov008_0219a238(self);
    obj = *(void **)(s + 0xe0);
    func_ov005_02196144(obj, (uint8_t)(s[0x140] + 1));
    func_ov008_0219a290(self);
    if (*(uint32_t *)(s + 0x14c) != *(uint32_t *)(s + 0xc4)) {
        obj2 = *(void **)(s + 0xe8);
        vt = *(VTable **)obj2;
        vt->f4(&tmp, obj2);
        func_02069828(self, tmp.a, tmp.b);
    }
    return 1;
}
