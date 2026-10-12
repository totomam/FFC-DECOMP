#include "ffc/types.h"

extern char data_ov007_021c4e60[];
extern void *data_ov007_021c4d58[];
extern uint32_t data_ov007_021c4e00[];

extern void *func_0203bb94(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0203b81c(uint32_t a);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021ae310(void *q, uint32_t t);
extern void func_020695ec(void *p);
extern void func_020697ac(void *p, void *x);
extern void *func_0203b95c(void *a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0209a6e0(uint64_t v, uint32_t a, uint32_t b);
extern uint64_t func_0209a6d4(uint64_t v, uint32_t a, uint32_t b);

void func_ov007_021aac9c(uint8_t *p)
{
    void *obj = func_0203bb94(data_ov007_021c4e60, 1, 0, 0);
    void **vt = *(void ***)obj;
    ((void (*)(void *))vt[10])(obj);
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t))vt[8])(obj, 2);
    func_02056bc0(p + 0x48, obj);
    uint32_t t = func_0203b81c(30);
    void *x = func_0205681c(0x98);
    if (x) {
        x = func_ov007_021ae310(x, t);
    }
    *(void **)(p + 0xc0) = x;
    func_020695ec(p);
    func_020697ac(p, *(void **)(p + 0xc0));
    void *a = p + 0x48;
    uint64_t *w = (uint64_t *)(p + 0xb8);
    int8_t i = 11;
    do {
        *(void **)(p + i * 4 + 0xc4) = func_0203b95c(data_ov007_021c4d58[1], t, 2, 1);
        uint32_t ret = func_0209a6e0(*w, 10, 0);
        vt = *(void ***)(*(void **)(p + i * 4 + 0xc4));
        ((void (*)(void *, uint32_t, uint32_t))vt[14])(*(void **)(p + i * 4 + 0xc4), ret + 1, 0);
        *w = func_0209a6d4(*w, 10, 0);
        vt = *(void ***)(*(void **)(p + i * 4 + 0xc4));
        ((void (*)(void *, uint32_t, uint32_t))vt[3])(*(void **)(p + i * 4 + 0xc4), data_ov007_021c4e00[2 * i], data_ov007_021c4e00[2 * i + 1]);
        vt = *(void ***)(*(void **)(p + i * 4 + 0xc4));
        ((void (*)(void *, uint32_t))vt[8])(*(void **)(p + i * 4 + 0xc4), 0);
        vt = *(void ***)(*(void **)(p + i * 4 + 0xc4));
        ((void (*)(void *))vt[10])(*(void **)(p + i * 4 + 0xc4));
        func_02056bc0(a, *(void **)(p + i * 4 + 0xc4));
        i--;
    } while (i >= 0);
    func_02056bc0(a, t);
}
