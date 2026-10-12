#include "ffc/types.h"

extern void func_020095b8(void *dst, void *src);
extern void *func_020059cc(void *object);

typedef void (*MethodFn)(void *self, void *arg, uint32_t val);

void func_ov003_021637f0(uint8_t *obj) {
    uint32_t local[3];
    uint32_t *lp;
    uint32_t *p;
    uint8_t **q;
    uint8_t *base;
    int32_t flag;
    int32_t off;
    uint8_t *o;
    MethodFn fn;

    lp = local;
    func_020095b8(lp, obj + 0x90);
    p = (uint32_t *)(obj + 0x88);
    q = (uint8_t **)(obj + 0x84);
    flag = (int32_t)p[1];
    base = *q;
    off = flag >> 1;
    if (flag & 1) {
        o = *(uint8_t **)(base + off);
        fn = *(MethodFn *)(o + p[0]);
    } else {
        fn = *(MethodFn *)p;
    }
    fn(base + off, lp, *(uint32_t *)(obj + 0x9c));
    func_020059cc(local);
    *(uint32_t *)(obj + 0xc) = (*(uint32_t *)(obj + 0xc) & ~0xffu) | 2;
}
