#include "ffc/types.h"

extern int func_ov007_021ae928(void *obj);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, uint32_t n);
extern void func_02005988(void *obj, void *node);
extern void *func_02032d24(void *obj, uint32_t a, uint32_t b, void *p, uint32_t c, uint32_t d);
extern void *func_ov001_0218dde0(void *obj, uint32_t n);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void *func_ov007_021b0bdc(void *a, void *b, uint32_t c);
extern void *data_020b8e44;
extern uint32_t data_ov007_021c5b30[2];
extern uint32_t data_ov007_021c5b38[2];

void func_ov007_021b04d4(uint8_t *p)
{
    uint32_t *dst;
    if (func_ov007_021ae928(p) == 1) {
        struct { uint32_t a; uint32_t b; } pair = { 0x80, 0x60 };
        void *h;
        void *obj;
        int used = 0;
        void *n;

        obj = func_0205681c(0xb0);
        if (obj != 0) {
            n = func_020159c8(data_020b8e44, 0xb0 + 0x5a);
            func_02005988(&h, n);


            obj = func_02032d24(obj, pair.a, pair.b, &h, 4, 0);
            used = 1;
        }
        n = func_ov001_0218dde0(p, 2);
        func_02056bc0(n, obj);
        if (used) {
            func_020059cc(&h);
        }
        dst = (uint32_t *)(p + 0xb0);
        dst[0] = data_ov007_021c5b30[0];
        dst[1] = data_ov007_021c5b30[1];
    } else {
        void *n;
        void *r;
        *(uint32_t *)(p + 0xc4) = 0;
        n = func_0205681c(0x9c);
        if (n != 0) {
            n = func_ov007_021b0bdc(n, p + 0xc4, *(uint32_t *)data_020b8e44);
        }
        r = func_ov001_0218dde0(p, 0);
        func_02056bc0(r, n);
        dst = (uint32_t *)(p + 0xb0);
        dst[0] = data_ov007_021c5b38[0];
        dst[1] = data_ov007_021c5b38[1];
    }
}
