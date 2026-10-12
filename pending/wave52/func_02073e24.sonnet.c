#include "ffc/types.h"

extern int32_t func_ov007_021bf468(void);
extern void *func_02071ec4(void *arg);
extern int32_t func_ov007_021bf21c(void *a, void *b, int32_t c);
extern void func_020744d4(void *arg);
extern void *func_0205681c(uint32_t size);
extern void *func_02073c48(void *a, void *b);
extern void func_02056bc0(void *object, void *node);

void func_02073e24(uint8_t *p)
{
    int32_t r;
    void *v;

    switch (func_ov007_021bf468()) {
    case 0:
        v = func_02071ec4(*(void **)(p + 0x88));
        r = func_ov007_021bf21c(*(void **)(p + 0x84), v, 0);
        if (r == 0) {
            *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2u;
            return;
        }
        func_020744d4(*(void **)(p + 0x80));
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2u;
        return;
    case 1:
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2u;
        return;
    default:
        v = func_0205681c(0x98);
        if (v != 0) {
            v = func_02073c48(v, *(void **)(p + 0x80));
        }
        func_02056bc0(p + 0x14, v);
        return;
    }
}
