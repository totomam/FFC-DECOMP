#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern int func_02075aac(void *x);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, void *b);
extern void *func_02032d24(void *a, Pair sz, void *d, uint32_t e, uint32_t f);
extern void *func_ov001_0218dde0(void *obj, uint32_t v);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void *data_020b8e44;
extern Pair data_ov007_021c5fcc;
extern Pair data_ov007_021c5fd4;

void func_ov007_021b2144(void *obj)
{
    uint8_t *p = (uint8_t *)obj;
    uint32_t buf[3];
    Pair pr;
    void *r7;
    void *o;
    int r4;

    if (*(uint32_t *)(p + 0xd4) != 0) {
        if (func_02075aac(*(void **)((uint8_t *)*(void **)data_020b8e44 + 0x88)) != 0) {
            goto alt;
        }
    }

    if (*(uint32_t *)(p + 0xd4) == 1) {
        r4 = 0;
        r7 = func_0205681c(0xb0);
        if (r7 != 0) {
            void *res = func_020159c8(data_020b8e44, 0x108);
            func_02005988(buf, res);
            pr.a = 0x80;
            pr.b = 0x60;
            r4 = 1;
            r7 = func_02032d24(r7, pr, buf, 4, 0);

        }
        o = func_ov001_0218dde0(obj, 2);
        func_02056bc0(o, r7);
        if (r4 != 0) {
            func_020059cc(buf);
        }
    }

    *(Pair *)((uint8_t *)obj + 0xb0) = data_ov007_021c5fcc;
    return;

alt:
    *(uint32_t *)(p + 0xc8) = *(uint32_t *)(p + 0xd8);
    *(Pair *)(p + 0xb0) = data_ov007_021c5fd4;
}
