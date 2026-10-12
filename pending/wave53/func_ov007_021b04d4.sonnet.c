#include "ffc/types.h"

extern int func_ov007_021ae928(void *obj);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, uint32_t n);
extern void func_02005988(void *obj, void *node);
typedef struct { uint32_t a; uint32_t b; } Pr;
extern void *func_02032d24(void *obj, Pr pr, void *p, uint32_t c, uint32_t d);
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
        Pr pair;
        uint32_t h[3];
        void *obj;
        int used = 0;
        void *n;

        obj = func_0205681c(0xb0);
        if (obj != 0) {
            n = func_020159c8(data_020b8e44, 0xb0 + 0x5a);
            func_02005988(h, n);


            pair.a = 0x80; pair.b = 0x60;
            used = 1;
            obj = func_02032d24(obj, pair, h, 4, 0);
        }
        n = func_ov001_0218dde0(p, 2);
        func_02056bc0(n, obj);
        if (used) {
            func_020059cc(h);
        }
        { uint32_t y = data_ov007_021c5b30[1], x = data_ov007_021c5b30[0];
        *(uint32_t *)(p + 0xb0) = x;
        *(uint32_t *)(p + 0xb4) = y; }
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
        { uint32_t y = data_ov007_021c5b38[1], x = data_ov007_021c5b38[0];
        *(uint32_t *)(p + 0xb0) = x;
        *(uint32_t *)(p + 0xb4) = y; }
    }
}
