#include "ffc/types.h"

extern void func_020095b8(void *p);
extern void func_02051060(void *out, void *a, uint32_t v);
extern void func_02068e18(uint8_t *self, void *b);
extern void *func_0200a678(void *object);
extern void *func_020059cc(void *object);

void func_02068ddc(uint8_t *p) {
    uint32_t a[3];
    uint32_t b[3];
    void *obj;
    uint32_t v;

    func_020095b8(a);
    obj = *(void **)(p + 0x20);
    v = ((uint32_t (*)(void *))(*(void **)*(void **)obj))(obj);
    func_02051060(b, a, v);
    func_02068e18(p, b);
    func_0200a678(b);
    func_020059cc(a);
}
