#include "ffc/types.h"

typedef struct {
    uint32_t pad;
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t func_020696e8(const void *object);
extern void func_020697ac(void *obj, uint32_t v);
extern int func_ov008_02199e40(void *obj);
extern void func_ov008_02199e4c(void *obj, uint8_t v, int flag);
extern void func_ov005_02196bcc(uint32_t p, int flag);
extern void func_ov008_02199e8c(void *obj);
extern int func_020692e8(uint32_t v);
extern void func_02069300(uint32_t v);

void func_ov008_0219a574(uint8_t *p)
{
    Pair *s;
    uint32_t t;

    s = (Pair *)func_020696e8(p);
    t = s->a & (s->a ^ s->b);
    if (t & 8) {
        func_020697ac(p, *(uint32_t *)(p + 0xc4));
    }

    s = (Pair *)func_020696e8(p);
    t = s->a & (s->a ^ s->b);
    if (!(t & 2)) {
        return;
    }
    int id = p[0x143];
    if (id != 0xff && func_ov008_02199e40(p) != 0) {
        func_ov008_02199e4c(p, p[0x143], 0);
        func_ov005_02196bcc(((uint32_t *)(*(uint32_t *)(p + 0xcc)))[p[0x143] % 8], 0);
        func_ov008_02199e8c(p);
        return;
    }
    if (func_020692e8(*(uint32_t *)(p + 0xc0)) != 0) {
        func_02069300(*(uint32_t *)(p + 0xc0));
        return;
    }
    func_020697ac(p, *(uint32_t *)(p + 0xc0));
}
