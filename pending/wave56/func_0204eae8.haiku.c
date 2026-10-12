#include "ffc/types.h"

extern uint8_t data_0213df10[];
extern void func_0208763c(void *);
extern void func_02087678(void *);
extern void func_020600b4(void *);
extern void func_02056844(void *);
extern void func_0204f770(void *, void *);

void func_0204eae8(void *p) {
    struct { void *ptr; volatile uint8_t flag; } g;
    uint8_t *s = (uint8_t *)p;
    void **it;
    void **obj;
    void *o;

    g.ptr = (void *)(*(uint32_t *)(data_0213df10 + 8) + 0x7c);
    g.flag = 1;
    if (g.flag) {
        func_0208763c(g.ptr);
    }

    it = *(void ***)(s + 0xa8);
    if (it != (void **)((uint8_t *)it + *(uint32_t *)(s + 0xac) * 4)) {
        do {
            obj = (void **)*it;
            ((void (*)(void *))((void **)*obj)[3])(obj);
            it++;
        } while (it != (void **)((uint8_t *)*(void ***)(s + 0xa8) + *(uint32_t *)(s + 0xac) * 4));
    }

    o = *(void **)(s + 0x14);
    if (o) {
        if (o) {
            ((void (*)(void *))((void **)*(void ***)o)[1])(o);
        }
        *(void **)(s + 0x14) = 0;
    }

    o = *(void **)(s + 0x18);
    if (o) {
        if (o) {
            func_020600b4(o);
            func_02056844(o);
        }
        *(void **)(s + 0x18) = 0;
    }

    func_0204f770(*(void **)(s + 4), s + 0x28);
    func_0204f770(*(void **)(s + 4), s + 0x50);
    func_0204f770(*(void **)(s + 4), s + 0x78);
    func_0204f770(*(void **)(s + 4), s + 0x8c);
    func_0204f770(*(void **)(s + 4), s + 0x3c);
    func_0204f770(*(void **)(s + 4), s + 0x64);

    if (g.flag) {
        func_02087678(g.ptr);
    }
}
