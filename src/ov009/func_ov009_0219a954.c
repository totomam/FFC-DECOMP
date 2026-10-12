#include "ffc/types.h"

extern void *data_020b8e44;
extern void func_02068658(void *obj);
extern void *func_02017e5c(void *a, uint32_t b);
extern void *func_02017e80(void *a, uint32_t b);
extern void func_02005988(void *dst, void *src);
extern void func_020686e8(void *obj, void *arg);
extern void *func_020059cc(void *object);

typedef struct { uint32_t a, b, c; } Tmp;

void func_ov009_0219a954(uint8_t *p, uint32_t idx)
{
    uint32_t off4;
    uint8_t *base;
    int32_t s;

    off4 = idx << 2;
    base = p + 0x88;
    if (*(void **)(base + off4) == 0) {
        return;
    }
    {
        void **vt = **(void ***)(base + off4);
        ((void (*)(void *))vt[10])(*(void **)(base + off4));
    }
    func_02068658(*(void **)(base + off4));
    s = *(int16_t *)(p + 0xae);
    if (*(uint16_t *)(p + s * 2 + 0xa0) != 0) {
        Tmp t1;
        void *r = func_02017e5c(data_020b8e44, *(uint16_t *)(p + s * 2 + 0x94));
        func_02005988(&t1, r);
        func_020686e8(*(void **)(base + off4), &t1);
        func_020059cc(&t1);
    } else {
        Tmp t2;
        void *r = func_02017e80(data_020b8e44, *(uint16_t *)(p + s * 2 + 0x94));
        func_02005988(&t2, r);
        func_020686e8(*(void **)(base + off4), &t2);
        func_020059cc(&t2);
    }
}
