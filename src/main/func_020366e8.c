#include "ffc/types.h"

extern uint32_t func_020363bc(const void *object);
extern uint32_t func_02017ec8(void *a, uint32_t b);
extern void func_02005988(void *dst, uint32_t v);
extern void func_02051060(void *dst, void *src, uint32_t zero);
extern void func_0200a630(void *dst, void *src);
extern uint32_t func_0200c600(void *a, void *b);
extern void *func_0200a678(void *object);
extern void *func_020059cc(void *object);
extern void *data_020b8e44;

uint32_t func_020366e8(void *obj) {
    uint32_t c[3];
    uint32_t b[3];
    uint32_t a[3];
    void *p = (void *)func_020363bc(obj);
    uint32_t v;
    uint32_t r;

    if (p == (void *)0) {
        return 0;
    }
    v = func_02017ec8(data_020b8e44, *(uint16_t *)((uint8_t *)p + 0x30));
    func_02005988(c, v);
    func_02051060(b, c, 0);
    func_0200a630(a, (uint8_t *)obj + 0x30);
    r = func_0200c600(b, a);
    func_0200a678(a);
    func_0200a678(b);
    func_020059cc(c);
    return r;
}
