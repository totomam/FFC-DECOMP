#include "ffc/types.h"

extern void func_02021338(uint32_t v);
extern void *func_02056aec(uint8_t *self);
extern void *func_020655b8(void *obj);
extern void *func_0203b688(void);
extern void func_02056bc0(void *object, void *node);

typedef void (*VFn)(void *self, uint32_t a, uint32_t b);

void *func_ov003_02163ed8(uint8_t *p) {
    void *obj;
    void *a;
    void *b;
    void *c;
    uint32_t i;
    uint32_t j;

    if (*(uint32_t *)(p + 0x98) != 0xFFFFFFFFu) {
        func_02021338(*(uint32_t *)(p + 0x98));
    }

    obj = *(void **)(p + 0xac);
    ((VFn)((void **)*(void **)obj)[14])(obj, 3, 0);
    i = 0;

    for (; i < *(uint32_t *)(p + 0x8c); i++) {
        j = i;
        obj = *(void **)(p + 0xb0 + i * 4);
        if (obj != 0) {
            ((VFn)((void **)*(void **)obj)[14])(obj, 3, j);
        }
    }

    a = func_02056aec(p);
    obj = *(void **)(p + 0xac);
    b = func_020655b8(obj);
    c = func_0203b688();
    func_02056bc0(c, b);
    func_02056bc0(c, a);
    return c;
}
