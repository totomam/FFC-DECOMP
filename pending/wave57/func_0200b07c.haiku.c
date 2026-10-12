#include "ffc/types.h"

extern int32_t func_0200c818(void *h);
extern int32_t func_0200c874(void *h);
extern int32_t func_0200c6c4(void *h);
extern void func_0200aff8(void *p);
extern int32_t func_02055054(uint32_t v);
extern void func_0200c710(void *h);
extern void func_0200c770(void *h);
extern uint32_t data_0213e098;

typedef int32_t (*vfn_t)(void *, int32_t);

void func_0200b07c(uint8_t *p)
{
    uint8_t *obj = *(uint8_t **)(p + 0x8c);
    vfn_t fn = (vfn_t)(((void **)*(void **)obj)[9]);
    uint32_t *r4 = (uint32_t *)fn(obj, 0);
    uint32_t f4;
    uint32_t x;

    if (*(int32_t *)(p + 0x158) != 0) {
        *(int32_t *)(p + 0x158) = *(int32_t *)(p + 0x158) - 1;
    }
    if (func_0200c818(*(void **)(p + 0x88)) != 0) {
        if (func_0200c874(*(void **)(p + 0x88)) != 0) {
            return;
        }
        if (func_0200c6c4(*(void **)(p + 0x88)) == 0) {
            return;
        }
        func_0200aff8(p);
        return;
    }
    if (func_0200c6c4(*(void **)(p + 0x88)) != 0) {
        f4 = r4[1];
        x = f4 & (r4[2] ^ f4);
        if (x & 0x130b) {
            func_0200aff8(p);
            return;
        }
        if (f4 & 0x30a) {
            int32_t ret = func_02055054(data_0213e098);
            int32_t v = *(int32_t *)(p + 0x9c) + ret;
            *(int32_t *)(p + 0x9c) = v;
            if ((uint32_t)v >= 0x12) {
                func_0200aff8(p);
            }
            return;
        }
        if (f4 & 8) {
            *(int32_t *)(p + 0x9c) = 0x12;
        } else {
            *(int32_t *)(p + 0x9c) = 0;
        }
        return;
    } else {
        f4 = r4[1];
        x = f4 & (r4[2] ^ f4);
        if (x & 1) {
            func_0200c710(*(void **)(p + 0x88));
            return;
        }
        if (*(int32_t *)(p + 0x158) == 0) {
            if (f4 & 0x130a) {
                func_0200c770(*(void **)(p + 0x88));
            }
        }
    }
}
