#include "ffc/types.h"

extern void func_0208763c(void *guard);
extern void func_0206303c(void *self, uint32_t n);
extern uint32_t func_0204f078(void *obj);
extern void *func_02052d90(void *mar, uint32_t index);
extern void *func_02056830(uint32_t size);
extern uint32_t func_020583cc(uint32_t v, uint32_t one, void *p, uint32_t three);
extern void func_02087678(void *guard);

void *func_02063294(uint8_t *p, uint8_t *q)
{
    struct {
        void *ptr;
        volatile uint8_t flag;
    } g;
    uint32_t idx, off, old, count, i, a, b, val;
    uint8_t *m, *r1, *ent, *ptr, *pp;

    g.ptr = p + 0x58;
    g.flag = 1;
    if (g.flag) {
        func_0208763c(g.ptr);
    }
    func_0206303c(p, 2);
    idx = func_0204f078(q);
    off = idx * 4;
    old = *(uint32_t *)(p + 0x38 + off);
    *(uint32_t *)(p + 0x38 + off) = old + 1;
    if (old == 0) {
        m = func_02052d90(*(void **)(p + 4), *(uint32_t *)(p + 8));
        count = *(uint32_t *)(m + 0x24);
        r1 = *(uint8_t **)(q + 0x18);
        a = *(uint32_t *)(r1 + 0xc);
        b = *(uint32_t *)(r1 + 0x10);
        func_02052d90(*(void **)(p + 4), *(uint32_t *)(p + 8));
        ptr = func_02056830(count * 4);
        pp = p + off;
        *(void **)(pp + 0x48) = ptr;
        for (i = 0; i < count; i++) {
            ent = *(uint8_t **)(p + 0x28) + i * 12;
            ptr = func_02052d90(*(void **)ent, *(uint32_t *)(ent + 4));
            val = (*(int8_t *)ptr == 0) ? a : b;
            ((uint32_t *)(*(uint32_t **)(pp + 0x48)))[i] = func_020583cc(val, 1, ptr + 4, 1);
        }
    }
    pp = p + off;
    ptr = *(uint8_t **)(pp + 0x48);
    if (g.flag) {
        func_02087678(g.ptr);
    }
    return ptr;
}
