#include "ffc/types.h"

extern void *data_020b93b8;
extern void *data_020b8e44;
extern uint32_t data_ov007_021c6358[2];
extern uint32_t data_ov007_021c6360[2];
extern uint32_t data_ov007_021c6368[2];

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *buf, void *x);
extern void *func_02032d24(void *a, Pair v, void *buf, int c, int d);
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

    if (*(uint32_t *)((uint8_t *)data_020b93b8 + 0x1d0) == 0) {
        int did = 0;
        uint32_t k = 0xb0;
        void *r7 = func_0205681c(k);
        uint32_t buf[2];
        Pair args;
        if (r7 != 0) {
            void *x = func_020159c8(data_020b8e44, k + 0xa6);
            func_02005988(buf, x);
            args.a = 0x80;
            args.b = 0x60;
            r7 = func_02032d24(r7, args, buf, 4, 0);
            did = 1;
        }
        {
            void *obj = func_ov001_0218dde0(self, 2);
            func_02056bc0(obj, r7);
        }
        if (did) {
            func_020059cc(buf);
        }
        src = data_ov007_021c6358;
        dst = (uint32_t *)(p + 0xb0);
        dst[0] = src[0];
        dst[1] = src[1];
        return;
    }
    if (func_ov007_021ae928() == 1) {
        int did = 0;
        uint32_t k = 0xb0;
        void *r7 = func_0205681c(k);
        uint32_t buf[2];
        Pair args;
        if (r7 != 0) {
            void *x = func_020159c8(data_020b8e44, k + 0x5a);
            func_02005988(buf, x);
            args.a = 0x80;
            args.b = 0x60;
            r7 = func_02032d24(r7, args, buf, 4, 0);
            did = 1;
        }
        {
            void *obj = func_ov001_0218dde0(self, 2);
            func_02056bc0(obj, r7);
        }
        if (did) {
            func_020059cc(buf);
        }
        src = data_ov007_021c6360;
        dst = (uint32_t *)(p + 0xb0);
        dst[0] = src[0];
        dst[1] = src[1];
        return;
    }
    node = 0;
    {
        void *al = func_0205681c(0x334);
        if (al != 0) {
            node = func_ov007_021b69b8(al, self, p + 0xc4, *(void **)(p + 0xb8));
        }
    }
    func_02056bc0(p + 0x14, node);
    src = data_ov007_021c6368;
    dst = (uint32_t *)(p + 0xb0);
    dst[0] = src[0];
    dst[1] = src[1];
}
