#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, uint32_t n);
extern void func_02005988(void *a, void *b);
typedef struct { uint32_t a, b; } S;
extern uint32_t func_02032d24(void *obj, S s, void *c, uint32_t d, uint32_t e);
extern void *func_ov001_0218dde0(void *obj, uint32_t n);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void func_02093bc8(void *dst, void *src);
extern void *func_ov007_021bcdc0(void *a, void *b, void *c, void *d, uint32_t e);
extern void *data_020b93b8;
extern void *data_020b8e44;
extern uint32_t data_ov007_021c633c[];
extern uint32_t data_ov007_021c634c[];
extern uint32_t data_ov007_021c6344[];

void func_ov007_021b3698(void *a)
{
    uint8_t *self = (uint8_t *)a;
    uint32_t buf[3];
    S hdr;
    int i;
    uint32_t r4;
    void *r7;

    if (*(uint32_t *)((uint8_t *)data_020b93b8 + 0x1d0) == 0) {
        r4 = 0;
        r7 = func_0205681c(0xb0);
        if (r7 != 0) {
            void *t = func_020159c8(data_020b8e44, 0x150);
            uint32_t *pb = buf;
            func_02005988(pb, t);
            hdr.a = 0x80;
            hdr.b = 0x60;
            r4 = 1;
            r7 = (void *)func_02032d24(r7, hdr, pb, 4, 0);
        }
        func_02056bc0(func_ov001_0218dde0(self, 2), r7);
        if (r4 != 0) {
            func_020059cc(buf);
        }
        *(S *)(self + 0xb0) = *(S *)data_ov007_021c633c;
        return;
    } else {
        *(uint32_t *)(self + 0xf8) = 0;
        func_02093bc8(self + 0xfc, data_ov007_021c634c);
        *(uint32_t *)(self + 0xf4) = 1;
        *(uint32_t *)(self + 0x160) = 1;
        *(uint32_t *)(self + 0x164) = 1;
        for (i = 0; i < 5; i++) {
            *(uint32_t *)(self + 0x138 + i * 4) = 0;
            *(uint32_t *)(self + 0x214 + i * 4) = 1;
        }
        *(uint8_t *)(self + 0xcc) = 0;
        {
            void *al = func_0205681c(0x1dc);
            void *n = 0;
            if (al != 0) {
                n = func_ov007_021bcdc0(al, self, self + 0xd0, self + 0xcc, *(uint32_t *)(self + 0xb8));
            }
            func_02056bc0(self + 0x14, n);
        }
        *(S *)(self + 0xb0) = *(S *)data_ov007_021c6344;
    }
}
