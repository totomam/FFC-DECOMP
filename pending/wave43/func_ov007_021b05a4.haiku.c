#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern int func_02075aac(uint32_t v);
extern void func_ov007_021b08ec(uint8_t *obj);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, void *b);
extern void *func_02032d24(void *a, Pair s, void *d, uint32_t e, uint32_t f);
extern void *func_ov001_0218dde0(uint8_t *obj, uint32_t n);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void *data_020b8e44;
extern uint32_t data_ov007_021c5b40[2];

void func_ov007_021b05a4(uint8_t *r5)
{
    uint32_t obj[3];
    Pair args;
    void *r7;
    int r4;

    if (*(uint32_t *)(r5 + 0xc4) == 1) {
        if (func_02075aac(*(uint32_t *)((*(uint8_t **)data_020b8e44) + 0x88)) != 0) {
            ((uint8_t *)data_020b8e44)[4] = 0xff;
            **(uint32_t **)(r5 + 0xbc) = 1;
            func_ov007_021b08ec(r5);
            return;
        }
    }

    if (func_02075aac(*(uint32_t *)((*(uint8_t **)data_020b8e44) + 0x88)) == 0) {
        r4 = 0;
        r7 = func_0205681c(0xb0);
        if (r7 != 0) {
            void *t = func_020159c8(data_020b8e44, 0x108);
            func_02005988(obj, t);
            args.a = 0x80;
            args.b = 0x60;
            r4 = 1;
            r7 = func_02032d24(r7, args, obj, 4, 0);
        }
        {
            void *n = func_ov001_0218dde0(r5, 2);
            func_02056bc0(n, r7);
        }
        if (r4 != 0) {
            func_020059cc(obj);
        }
    }

    {
        *(Pair *)(r5 + 0xb0) = *(Pair *)data_ov007_021c5b40;
    }
}
