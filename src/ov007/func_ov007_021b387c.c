#include "ffc/types.h"

extern void *data_020b93b8;
extern void *data_020b8e44;
extern uint32_t data_ov007_021c6358[2];
extern uint32_t data_ov007_021c6360[2];
extern uint32_t data_ov007_021c6368[2];

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *buf1, void *x);
extern void *func_02032d24(void *a, Pair v, void *buf1, int c, int d);
extern void *func_ov001_0218dde0(void *p, int n);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern int func_ov007_021ae928(void);
extern void *func_ov007_021b69b8(void *a, void *b, void *c, void *d);

void func_ov007_021b387c(void *self)
{
    uint8_t *p = (uint8_t *)self;
    void *node;
    uint32_t *dst;
    uint32_t *src;
    Pair args1, args2;
    uint32_t buf1[3], buf2[3];
    int did;
    uint32_t k;

    if (*(uint32_t *)((uint8_t *)data_020b93b8 + 0x1d0) == 0) {
        void *r7; did = 0;
        k = 0xb0;

        r7 = func_0205681c(k);
        if (r7 != 0) {
            void *x = func_020159c8(data_020b8e44, k + 0xa6);
            func_02005988(buf1, x);
            args1.a = 0x80;
            args1.b = 0x60;
            did = 1;
            r7 = func_02032d24(r7, args1, buf1, 4, 0);
        }
        {
            void *obj = func_ov001_0218dde0(self, 2);
            func_02056bc0(obj, r7);
        }
        if (did) {
            func_020059cc(buf1);
        }
        src = data_ov007_021c6358;
        dst = (uint32_t *)(p + 0xb0);
        *(Pair *)(p + 0xb0) = *(Pair *)src;
        return;
    }
    if (func_ov007_021ae928() == 1) {
        void *r7; did = 0;
        k = 0xb0;

        r7 = func_0205681c(k);
        if (r7 != 0) {
            void *x = func_020159c8(data_020b8e44, k + 0x5a);
            func_02005988(buf2, x);
            args2.a = 0x80;
            args2.b = 0x60;
            did = 1;
            r7 = func_02032d24(r7, args2, buf2, 4, 0);
        }
        {
            void *obj = func_ov001_0218dde0(self, 2);
            func_02056bc0(obj, r7);
        }
        if (did) {
            func_020059cc(buf2);
        }
        src = data_ov007_021c6360;
        dst = (uint32_t *)(p + 0xb0);
        *(Pair *)(p + 0xb0) = *(Pair *)src;
        return;
    }
    node = func_0205681c(0x334);
    if (node != 0) {
        node = func_ov007_021b69b8(node, self, p + 0xc4, *(void **)(p + 0xb8));
    }
    func_02056bc0(p + 0x14, node);
    src = data_ov007_021c6368;
    dst = (uint32_t *)(p + 0xb0);
    *(Pair *)(p + 0xb0) = *(Pair *)src;
}
