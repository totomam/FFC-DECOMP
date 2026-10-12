#include "ffc/types.h"

extern int func_0206cb98(void *obj);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(void *obj, int v);
extern void func_02005988(void *buf, uint32_t v);
extern void *func_02032d24(void *obj, uint32_t a, uint32_t b, void *buf, int c, int d);
extern void func_020059cc(void *buf);
extern void func_02056bc0(void *object, void *node);
extern void *func_0206df9c(void *obj, int v);
extern void func_0206e27c(void *obj, int v);
extern void func_02055ae8(void *obj, void *p);
extern void *data_020b8e44;
extern uint32_t data_ov007_021c42f0[];
extern uint32_t data_ov007_021c42f8[];

typedef struct {
    uint32_t a[2];
    uint32_t b[3];
} Locals;

void func_ov007_021a5934(uint8_t *p)
{
    Locals L;
    void *obj;
    int r4;
    int r7;

    if (func_0206cb98(*(void **)(p + 0xc0)) != 0) {
        r7 = 0;
        r4 = 0;
        obj = func_0205681c(0xb0);
        if (obj != 0) {
            func_02005988(L.b, func_020159c8(data_020b8e44, 0x2d));
            L.a[0] = 0x80;
            L.a[1] = 0x60;
            obj = func_02032d24(obj, L.a[0], L.a[1], L.b, 4, r7);
            r4 = 1;
        }
        if (r4) {
            func_020059cc(L.b);
        }
        func_02056bc0(p + 0x14, obj);
        {
            uint32_t v0 = data_ov007_021c42f0[0];
            uint32_t v1 = data_ov007_021c42f0[1];
            *(uint32_t *)(p + 0xb8) = v0;
            *(uint32_t *)(p + 0xbc) = v1;
        }
    } else {
        void *x = func_0205681c(0x29c);
        if (x != 0) {
            x = func_0206df9c(x, 0);
        }
        *(void **)(p + 0xec) = x;
        func_0206e27c(x, 1);
        func_02055ae8((uint8_t *)*(void **)(p + 0xec) + 0x20, p ? p + 0x80 : p);
        func_02056bc0(p + 0x48, *(void **)(p + 0xec));
        {
            uint32_t v0 = data_ov007_021c42f8[0];
            uint32_t v1 = data_ov007_021c42f8[1];
            *(uint32_t *)(p + 0xb8) = v0;
            *(uint32_t *)(p + 0xbc) = v1;
        }
    }
}
